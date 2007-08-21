#!/usr/bin/env python

### command line options helper
from  Options import Options
options = Options()


### imports
from Mixins import _SimpleParameterTypeBase, _ParameterTypeBase, _Parameterizable, _ConfigureComponent, _TypedParameterizable
from Mixins import  _Labelable,  _Unlabelable 
#from Mixins import _ValidatingListBase
from Types import * 
from Modules import *
from SequenceTypes import *
from SequenceTypes import _ModuleSequenceType  #extend needs it
import DictTypes

from ExceptionHandling import *
def findProcess(module):
    """Look inside the module and find the Processes it contains"""
    class Temp(object):
        pass
    process = None
    if isinstance(module,dict):
        if 'process' in module:
            p = module['process']
            module = Temp()
            module.process = p
    if hasattr(module,'process'):
        if isinstance(module.process,Process):
            process = module.process
        else:
            raise RuntimeError("The attribute named 'process' does not inherit from the Process class")
    else:        
        raise RuntimeError("no 'process' attribute found in the module, please add one")
    return process


class Process(object):
    """Root class for a CMS configuration process"""
    def __init__(self,name):
        self.__dict__['_Process__name'] = name
        self.__dict__['_Process__filters'] = {}
        self.__dict__['_Process__producers'] = {}
        self.__dict__['_Process__source'] = None
        self.__dict__['_Process__looper'] = None
        self.__dict__['_Process__schedule'] = None
        self.__dict__['_Process__analyzers'] = {}
        self.__dict__['_Process__outputmodules'] = {}
        self.__dict__['_Process__paths'] = DictTypes.SortedKeysDict()    # have to keep the order
        self.__dict__['_Process__endpaths'] = DictTypes.SortedKeysDict() # of definition
        self.__dict__['_Process__sequences'] = {}
        self.__dict__['_Process__services'] = {}
        self.__dict__['_Process__essources'] = {}
        self.__dict__['_Process__esproducers'] = {}
        self.__dict__['_Process__esprefers'] = {}
        self.__dict__['_Process__psets']={}
        self.__dict__['_Process__vpsets']={}
        self.__dict__['_cloneToObjectDict'] = {}
    def filters_(self):
        """returns a dict of the filters which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__filters)
    filters = property(filters_, doc="dictionary containing the filters for the process")
    def name_(self):
        return self.__name
    def setName_(self,name):
        self.__name = name
    process = property(name_,setName_, doc="name of the process")
    def producers_(self):
        """returns a dict of the producers which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__producers)
    producers = property(producers_,doc="dictionary containing the producers for the process")
    def source_(self):
        """returns the source which has been added to the Process or None if none have been added"""
        return self.__source
    def setSource_(self,src):
        self._placeSource('source',src)
    source = property(source_,setSource_,doc='the main source or None if not set')
    def looper_(self):
        """returns the looper which has been added to the Process or None if none have been added"""
        return self.__looper
    def setLooper_(self,lpr):
        self._placeLooper('looper',lpr)
    looper = property(looper_,setLooper_,doc='the main looper or None if not set')
    def analyzers_(self):
        """returns a dict of the analyzers which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__analyzers)
    analyzers = property(analyzers_,doc="dictionary containing the analyzers for the process")
    def outputModules_(self):
        """returns a dict of the output modules which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__outputmodules)
    outputModules = property(outputModules_,doc="dictionary containing the output_modules for the process")
    def paths_(self):
        """returns a dict of the paths which have been added to the Process"""
        return DictTypes.SortedAndFixedKeysDict(self.__paths)
    paths = property(paths_,doc="dictionary containing the paths for the process")
    def endpaths_(self):
        """returns a dict of the endpaths which have been added to the Process"""
        return DictTypes.SortedAndFixedKeysDict(self.__endpaths)
    endpaths = property(endpaths_,doc="dictionary containing the endpaths for the process")
    def sequences_(self):
        """returns a dict of the sequences which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__sequences)
    sequences = property(sequences_,doc="dictionary containing the sequences for the process")
    def schedule_(self):
        """returns the schedule which has been added to the Process or None if none have been added"""
        return self.__schedule
    def setSchedule_(self,sch):
        self.__dict__['_Process__schedule'] = sch
    schedule = property(schedule_,setSchedule_,doc='the schedule or None if not set')
    def services_(self):
        """returns a dict of the services which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__services)
    services = property(services_,doc="dictionary containing the services for the process")
    def es_producers_(self):
        """returns a dict of the esproducers which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__esproducers)
    es_producers = property(es_producers_,doc="dictionary containing the es_producers for the process")
    def es_sources_(self):
        """returns a the es_sources which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__essources)
    es_sources = property(es_sources_,doc="dictionary containing the es_sources for the process")
    def es_prefers_(self):
        """returns a dict of the es_prefers which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__esprefers)
    es_prefers = property(es_prefers_,doc="dictionary containing the es_prefers for the process")
    def psets_(self):
        """returns a dict of the PSets which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__psets)
    psets = property(psets_,doc="dictionary containing the PSets for the process")
    def vpsets_(self):
        """returns a dict of the VPSets which have been added to the Process"""
        return DictTypes.FixedKeysDict(self.__vpsets)
    vpsets = property(vpsets_,doc="dictionary containing the PSets for the process")
    def __setattr__(self,name,value):
        if not isinstance(value,_ConfigureComponent):
            raise TypeError("can only assign labels to an object which inherits from '_ConfigureComponent'\n"
                            +"an instance of "+str(type(value))+" will not work")
        if not isinstance(value,_Labelable) and not isinstance(value,Source) and not isinstance(value,Looper) and not isinstance(value,Schedule):
            if name == value.type_():
                self.add_(value)
                return
            else:
                raise TypeError("an instance of "+str(type(value))+" can not be assigned the label '"+name+"'.\n"+
                                "Please either use the label '"+value.type_()+" or use the 'add_' method instead.")
        #clone the item
        newValue =value.copy()

        #NOTE: for now, ESPrefer's are assigned the same label as the item to which they 'choose'
        # however, only one of them can take the attribute name and it by rights should go to
        # the module and not the ESPrefer
        if not isinstance(value,ESPrefer):
            self.__dict__[name]=newValue
        if isinstance(newValue,_Labelable):
            newValue.setLabel(name)
            self._cloneToObjectDict[id(value)] = newValue
            self._cloneToObjectDict[id(newValue)] = newValue
        #now put in proper bucket
        newValue._place(name,self)
        
    def __delattr__(self,name):
        pass

    def add_(self,value):
        """Allows addition of components which do not have to have a label, e.g. Services"""
        if not isinstance(value,_ConfigureComponent):
            raise TypeError
        if not isinstance(value,_Unlabelable):
            raise TypeError
        #clone the item
        newValue =value.copy()
        newValue._place('',self)
        
    def _placeOutputModule(self,name,mod):
        self.__outputmodules[name]=mod
    def _placeProducer(self,name,mod):
        self.__producers[name]=mod
    def _placeFilter(self,name,mod):
        self.__filters[name]=mod
    def _placeAnalyzer(self,name,mod):
        self.__analyzers[name]=mod
    def _placePath(self,name,mod):
        try:
            self.__paths[name]=mod._postProcessFixup(self._cloneToObjectDict)
        except ModuleCloneError, msg:
            context = format_outerframe(4)
            raise Exception("%sThe module %s in path %s is unknown to the process %s." %(context, msg, name, self._Process__name))
    def _placeEndPath(self,name,mod):
        try: 
            self.__endpaths[name]=mod._postProcessFixup(self._cloneToObjectDict)
        except ModuleCloneError, msg:
            context = format_outerframe(4)
            raise Exception("%sThe module %s in endpath %s is unknown to the process %s." %(context, msg, name, self._Process__name))
    def _placeSequence(self,name,mod):
        self.__sequences[name]=mod._postProcessFixup(self._cloneToObjectDict)
    def _placeESProducer(self,name,mod):
        self.__esproducers[name]=mod
    def _placeESPrefer(self,name,mod):
        self.__esprefers[name]=mod
    def _placeESSource(self,name,mod):
        self.__essources[name]=mod
    def _placePSet(self,name,mod):
        self.__psets[name]=mod
    def _placeVPSet(self,name,mod):
        self.__vpsets[name]=mod
    def _placeSource(self,name,mod):
        """Allow the source to be referenced by 'source' or by type name"""
        if name != 'source':
            raise ValueError("The label '"+name+"' can not be used for a Source.  Only 'source' is allowed.")
        if self.__dict__['_Process__source'] is not None :
            del self.__dict__[self.__dict__['_Process__source'].type_()]
        self.__dict__['_Process__source'] = mod
        self.__dict__[mod.type_()] = mod
    def _placeLooper(self,name,mod):
        if name != 'looper':
            raise ValueError("The label '"+name+"' can not be used for a Looper.  Only 'looper' is allowed.")
        self.__dict__['_Process__looper'] = mod
    def _placeService(self,typeName,mod):
        self.__services[typeName]=mod
        self.__dict__[typeName]=mod
    def extend(self,other,items=()):
        """Look in other and find types which we can use"""
        seqs = dict()
        labelled = dict()
        for name in dir(other):
            item = getattr(other,name)
            if isinstance(item,_ModuleSequenceType):
                seqs[name]=item
                continue
            if isinstance(item,_Labelable):
                self.__setattr__(name,item)
                labelled[name]=item
                try:
                    item.label()
                except:
                    item.setLabel(name)
                continue
            if isinstance(item,_Unlabelable):
                self.add_(item)
        #now create a sequence which uses the newly made items
        for name in seqs.iterkeys():
            seq = seqs[name]
            #newSeq = seq.copy()
            #
            if id(seq) not in self._cloneToObjectDict:
                self.__setattr__(name,seq)
            else:
                newSeq = self._cloneToObjectDict[id(seq)]
                self.__dict__[name]=newSeq
                newSeq.setLabel(name)
                #now put in proper bucket
                newSeq._place(name,self)
    def include(self,filename):
        """include the content of a configuration language file into the process
             this is identical to calling process.extend(include('filename'))
        """
        self.extend(include(filename))
    def _dumpConfigNamedList(self,items,typeName,indent):
        returnValue = ''
        for name,item in items:
            returnValue +=indent+typeName+' '+name+' = '+item.dumpConfig(indent,indent)
        return returnValue    
    def _dumpConfigUnnamedList(self,items,typeName,indent):
        returnValue = ''
        for name,item in items:
            returnValue +=indent+typeName+' = '+item.dumpConfig(indent,indent)
        return returnValue
    def _dumpConfigOptionallyNamedList(self,items,typeName,indent):
        returnValue = ''
        for name,item in items:
            if name == item.type_():
                name = ''
            else:
                name = ' '+name
            returnValue +=indent+typeName+name+' = '+item.dumpConfig(indent,indent)
        return returnValue
    def dumpConfig(self):
        """return a string containing the equivalent process defined using the configuration language"""
        config = "process "+self.__name+" = {\n"
        indent = "  "
        if self.source_():
            config += indent+"source = "+self.source_().dumpConfig(indent,indent)
        if self.looper_():
            config += indent+"looper = "+self.looper_().dumpConfig(indent,indent)
        config+=self._dumpConfigNamedList(self.producers_().iteritems(),
                                  'module',
                                  indent)
        config+=self._dumpConfigNamedList(self.filters_().iteritems(),
                                  'module',
                                  indent)
        config+=self._dumpConfigNamedList(self.analyzers_().iteritems(),
                                  'module',
                                  indent)
        config+=self._dumpConfigNamedList(self.outputModules_().iteritems(),
                                  'module',
                                  indent)
        config+=self._dumpConfigNamedList(self.sequences_().iteritems(),
                                  'sequence',
                                  indent)
        config+=self._dumpConfigNamedList(self.paths_().iteritems(),
                                  'path',
                                  indent)
        config+=self._dumpConfigNamedList(self.endpaths_().iteritems(),
                                  'endpath',
                                  indent)
        config+=self._dumpConfigUnnamedList(self.services_().iteritems(),
                                  'service',
                                  indent)
        config+=self._dumpConfigOptionallyNamedList(
            self.es_producers_().iteritems(),
            'es_module',
            indent)
        config+=self._dumpConfigOptionallyNamedList(
            self.es_sources_().iteritems(),
            'es_source',
            indent)
        config+=self._dumpConfigOptionallyNamedList(
            self.es_prefers_().iteritems(),
            'es_prefer',
            indent)
        for name,item in self.psets.iteritems():
            config +=indent+item.configTypeName()+' '+name+' = '+item.configValue(indent,indent)
        for name,item in self.vpsets.iteritems():
            config +=indent+'VPSet '+name+' = '+item.configValue(indent,indent)
        if self.schedule:
            pathNames = [p.label() for p in self.schedule]
            config +=indent+'schedule = {'+','.join(pathNames)+'}\n'
            
#        config+=self._dumpConfigNamedList(self.vpsets.iteritems(),
#                                  'VPSet',
#                                  indent)
        config += "}\n"
        return config
    def _dumpPythonList(self,items):
        indent = '    '
        returnValue = ''
        for name,item in items:
            returnValue +='process.'+name+' = '+item.dumpPython('',indent)+'\n'
        return returnValue
    def dumpPython(self):
        """return a string containing the equivalent process defined using the configuration language"""
        result = "process = cms.Process(\""+self.__name+"\")\n\n"
        indent = "    "
        if self.source_():
            result += "process.source = "+self.source_().dumpPython('', indent)
        if self.looper_():
            result += "process.looper = "+self.looper_().dumpPython('', indent)
        result+=self._dumpPythonList(self.producers_().iteritems())
        result+=self._dumpPythonList(self.filters_().iteritems())
        result+=self._dumpPythonList(self.analyzers_().iteritems())
        result+=self._dumpPythonList(self.outputModules_().iteritems())
        result+=self._dumpPythonList(self.sequences_().iteritems())
        result+=self._dumpPythonList(self.paths_().iteritems())
        result+=self._dumpPythonList(self.endpaths_().iteritems())
        result+=self._dumpPythonList(self.services_().iteritems())
        result+=self._dumpPythonList(self.es_producers_().iteritems())
        result+=self._dumpPythonList(self.es_sources_().iteritems())
        result+=self._dumpPythonList(self.es_prefers_().iteritems())
        result+=self._dumpPythonList(self.psets.iteritems())
        result+=self._dumpPythonList(self.vpsets.iteritems())
        if self.schedule:
            pathNames = [p.label() for p in self.schedule]
            result +=indent+'schedule = ('+','.join(pathNames)+')\n'
        return result

    def insertOneInto(self, parameterSet, label, item):
        vitems = []
        if not item == None:
            newlabel = item.nameInProcessDesc_(label)
            vitems = [newlabel]
            item.insertInto(parameterSet, newlabel)
        parameterSet.addVString(True, label, vitems)
    def insertManyInto(self, parameterSet, label, itemDict):
        l = []
        for name,value in itemDict.iteritems():
          newLabel = value.nameInProcessDesc_(name)
          l.append(newLabel)
          value.insertInto(parameterSet, name)
        parameterSet.addVString(True, label, l)
    def insertServices(self, processDesc, itemDict):
        for name,value in itemDict.iteritems():
           value.insertInto(processDesc)
    def insertTriggerPaths(self, processDesc):
        p = processDesc.newPSet()
        l = []
        for name,value in self.paths_().iteritems():
          l.append(name)
          value.insertInto(processDesc, name)
        p.addVString(True, "@trigger_paths", l)
        processDesc.addPSet(False, "@trigger_paths", p)
    def fillProcessDesc(self, processDesc, processPSet):
        processPSet.addString(True, "@process_name", self.name_())
        all_modules = self.producers_().copy()
        all_modules.update(self.filters_())
        all_modules.update(self.analyzers_())
        all_modules.update(self.outputModules_())
        self.insertManyInto(processPSet, "@all_modules", all_modules)
        self.insertOneInto(processPSet,  "@all_sources", self.source_())
        self.insertOneInto(processPSet,  "@all_loopers",   self.looper_())
        self.insertManyInto(processPSet, "@all_esmodules", self.es_producers_())
        self.insertManyInto(processPSet, "@all_essources", self.es_sources_())
        self.insertManyInto(processPSet, "@all_esprefers", self.es_prefers_())
        self.insertTriggerPaths(processPSet)
        self.insertManyInto(processPSet, "@end_paths", self.endpaths_())
        self.insertOneInto(processPSet,  "@paths", self.schedule_())
        self.insertServices(processDesc, self.services_())
        return processDesc


class FileInPath(_SimpleParameterTypeBase):
    def __init__(self,value):
        super(FileInPath,self).__init__(value)
    @staticmethod
    def _isValid(value):
        return True
    def configValue(self,indent,deltaIndent):
        return string.formatValueForConfig(self.value())
    @staticmethod
    def formatValueForConfig(value):
        return string.formatValueForConfig(value)
    @staticmethod
    def _valueFromString(value):
        return FileInPath(value)
    def insertInto(self, parameterSet, myname):
      parameterSet.addNewFileInPath( self.isTracked(), myname, self.value() ) 


def include(fileName):
    """Parse a configuration file language file and return a 'module like' object"""
    from FWCore.ParameterSet.parseConfig import importConfig
    return importConfig(fileName)

def processFromString(processString):
    """Reads a string containing the equivalent content of a .cfg file and
    creates a Process object"""
    from FWCore.ParameterSet.parseConfig import processFromString
    return processFromString(processString)

if __name__=="__main__":
    import unittest
    class TestModuleCommand(unittest.TestCase):
        def setUp(self):
            """Nothing to do """
            print 'testing'
        def testParameterizable(self):
            p = _Parameterizable()
            self.assertEqual(len(p.parameterNames_()),0)
            p.a = int32(1)
            self.assert_('a' in p.parameterNames_())
            self.assertEqual(p.a.value(), 1)
            p.a = 10
            self.assertEqual(p.a.value(), 10)
            p.a = untracked(int32(1))
            self.assertEqual(p.a.value(), 1)
            self.failIf(p.a.isTracked())
            p.a = untracked.int32(1)
            self.assertEqual(p.a.value(), 1)
            self.failIf(p.a.isTracked())
            p = _Parameterizable(foo=int32(10), bar = untracked(double(1.0)))
            self.assertEqual(p.foo.value(), 10)
            self.assertEqual(p.bar.value(),1.0)
            self.failIf(p.bar.isTracked())
            self.assertRaises(TypeError,setattr,(p,'c',1))
            p = _Parameterizable(a=PSet(foo=int32(10), bar = untracked(double(1.0))))
            self.assertEqual(p.a.foo.value(),10)
            self.assertEqual(p.a.bar.value(),1.0)
            p.b = untracked(PSet(fii = int32(1)))
            self.assertEqual(p.b.fii.value(),1)
            self.failIf(p.b.isTracked())
            #test the fact that values can be shared
            v = int32(10)
            p=_Parameterizable(a=v)
            v.setValue(11)
            self.assertEqual(p.a.value(),11)
            p.a = 12
            self.assertEqual(p.a.value(),12)
            self.assertEqual(v.value(),12)
        def testTypedParameterizable(self):
            p = _TypedParameterizable("blah", b=int32(1))
            #see if copy works deeply
            other = p.copy()
            other.b = 2
            self.assertNotEqual(p.b,other.b)

        def testProcessInsertion(self):
            p = Process("test")
            p.a = EDAnalyzer("MyAnalyzer")
            self.assert_( 'a' in p.analyzers_() )
            self.assert_( 'a' in p.analyzers)
            p.add_(Service("MessageLogger"))
            self.assert_('MessageLogger' in p.services_())
            self.assertEqual(p.MessageLogger.type_(), "MessageLogger")
            p.Tracer = Service("Tracer")
            self.assert_('Tracer' in p.services_())
            self.assertRaises(TypeError, setattr, *(p,'b',"this should fail"))
            self.assertRaises(TypeError, setattr, *(p,'bad',Service("MessageLogger")))
            self.assertRaises(ValueError, setattr, *(p,'bad',Source("PoolSource")))
            p.out = OutputModule("Outer")
            self.assertEqual(p.out.type_(), 'Outer')
            self.assert_( 'out' in p.outputModules_() )
            
            p.geom = ESSource("GeomProd")
            print p.es_sources_().keys()
            self.assert_('geom' in p.es_sources_())
            p.add_(ESSource("ConfigDB"))
            self.assert_('ConfigDB' in p.es_sources_())

        def testProcessExtend(self):
            class FromArg(object):
                def __init__(self,*arg,**args):
                    for name in args.iterkeys():
                        self.__dict__[name]=args[name]
            
            a=EDAnalyzer("MyAnalyzer")
            s1 = Sequence(a)
            s2 = Sequence(s1)
            s3 = Sequence(s2)
            d = FromArg(
                    a=a,
                    b=Service("Full"),
                    c=Path(a),
                    d=s2,
                    e=s1,
                    f=s3,
                    g=Sequence(s1+s2+s3)
                )
            p = Process("Test")
            p.extend(d)
            self.assertEqual(p.a.type_(),"MyAnalyzer")
            self.assertRaises(AttributeError,getattr,p,'b')
            self.assertEqual(p.Full.type_(),"Full")
            self.assertEqual(str(p.c),'a')
            self.assertEqual(str(p.d),'a')
            p.dumpConfig()
            p.dumpPython()

        def testProcessDumpConfig(self):
            p = Process("test")
            p.a = EDAnalyzer("MyAnalyzer")
            p.paths = Path(p.a)
            p.s = Sequence(p.a)
            p.p2 = Path(p.s)
            p.dumpConfig()
            p.dumpPython()
            
        def testSecSource(self):
            p = Process('test')
            p.a = SecSource("MySecSource")
            self.assertEqual(p.dumpConfig(),"process test = {\n  secsource a = MySecSource { \n  }\n}\n")

        def testSequence(self):
            p = Process('test')
            p.a = EDAnalyzer("MyAnalyzer")
            p.b = EDAnalyzer("YourAnalyzer")
            p.c = EDAnalyzer("OurAnalyzer")
            p.s = Sequence(p.a*p.b)
            self.assertEqual(str(p.s),'(a*b)')
            self.assertEqual(p.s.label(),'s')
            path = Path(p.c+p.s)
            self.assertEqual(str(path),'(c+(a*b))')

        def testPath(self):
            p = Process("test")
            p.a = EDAnalyzer("MyAnalyzer")
            p.b = EDAnalyzer("YourAnalyzer")
            p.c = EDAnalyzer("OurAnalyzer")
            path = Path(p.a)
            path *= p.b
            path += p.c
            self.assertEqual(str(path),'((a*b)+c)')
            path = Path(p.a*p.b+p.c)
            self.assertEqual(str(path),'((a*b)+c)')
#            path = Path(p.a)*p.b+p.c #This leads to problems with sequences
#            self.assertEqual(str(path),'((a*b)+c)')
            path = Path(p.a+ p.b*p.c)
            self.assertEqual(str(path),'(a+(b*c))')
            path = Path(p.a*(p.b+p.c))
            self.assertEqual(str(path),'(a*(b+c))')
            path = Path(p.a*(p.b+~p.c)) 
            self.assertEqual(str(path),'(a*(b+!c))')
            p.es = ESProducer("AnESProducer")
            self.assertRaises(TypeError,Path,p.es)

        def testCloneSequence(self):
            p = Process("test")
            a = EDAnalyzer("MyAnalyzer")
            p.a = a 
            a.setLabel("a")
            b = EDAnalyzer("YOurAnalyzer")
            p.b = b
            b.setLabel("b")
            path = Path(a * b)
            p.path = Path(p.a*p.b) 
            lookuptable = {id(a): p.a, id(b): p.b}
            #self.assertEqual(str(path),str(path._postProcessFixup(lookuptable)))
            #lookuptable = p._cloneToObjectDict
            #self.assertEqual(str(path),str(path._postProcessFixup(lookuptable)))
            self.assertEqual(str(path),str(p.path))
            
        def testSchedule(self):
            p = Process("test")
            p.a = EDAnalyzer("MyAnalyzer")
            p.b = EDAnalyzer("YourAnalyzer")
            p.c = EDAnalyzer("OurAnalyzer")
            p.path1 = Path(p.a)
            p.path2 = Path(p.b)
            
            s = Schedule(p.path1,p.path2)
            self.assertEqual(s[0],p.path1)
            self.assertEqual(s[1],p.path2)
            p.schedule = s
        def testExamples(self):
            p = Process("Test")
            p.source = Source("PoolSource",fileNames = untracked(string("file:reco.root")))
            p.foos = EDProducer("FooProducer")
            p.bars = EDProducer("BarProducer", foos=InputTag("foos"))
            p.out = OutputModule("PoolOutputModule",fileName=untracked(string("file:foos.root")))
            p.p = Path(p.foos*p.bars)
            p.e = EndPath(p.out)
            p.add_(Service("MessageLogger"))
        def testFindDependencies(self):
            p = Process("test")
            p.a = EDProducer("MyProd")
            p.b = EDProducer("YourProd")
            p.c = EDProducer("OurProd")
            path = Path(p.a)
            path *= p.b
            path += p.c
            print 'dependencies'
            deps= path.moduleDependencies()
            self.assertEqual(deps['a'],set())
            self.assertEqual(deps['b'],set(['a']))
            self.assertEqual(deps['c'],set())
            
            path *=p.a
            print str(path)
            self.assertRaises(RuntimeError,path.moduleDependencies)
            path = Path(p.a*(p.b+p.c))
            deps = path.moduleDependencies()
            self.assertEqual(deps['a'],set())
            self.assertEqual(deps['b'],set(['a']))
            self.assertEqual(deps['c'],set(['a']))
            #deps= path.moduleDependencies()
            #print deps['a']
        def testProcessFromString(self):
            process = processFromString(
"""process Test = {
   source = PoolSource {}
   module out = OutputModule {}
   endpath o = {out}
}""")
            self.assertEqual(process.source.type_(),"PoolSource")
                               
    unittest.main()
