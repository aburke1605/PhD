from Configurables import DecayTreeTuple
from DecayTreeTuple.Configuration import *

# Stream  and stripping line we want to use
stream = 'AllStreams'
line = 'D2hhPromptDst2D2KKLine'

# Create an ntuple to capture D*+ decays from the StrippingLine line
dtt = DecayTreeTuple('TupleDstToD0pi_D0ToKK')
dtt.Inputs = ['/Event/{0}/Phys/{1}/Particles'.format(stream, line)] #Phys/{0}/Particles'.format(line)] # for microDST
#dtt.Decay = '[D*(2010)+ -> (D0 -> K- K+) pi+]CC' # written like this means tuple tools only runs on the D*(2010)+, to select particles to store information on mark them with a ^, e.g.:
dtt.Decay = '[D*(2010)+ -> ^(D0 -> ^K- ^K+) ^pi+]CC' # but this not ideal as we may only want to run some tools on D and some on children, use Branches below
# Additional tuple tools:
track_tool = dtt.addTupleTool('TupleToolTrackInfo')
# Only need to store a tool in a variable if you want to configure it:
track_tool.Verbose = True # 'Verbose' - further information
dtt.addTupleTool('TupleToolPrimaries')

dtt.addBranches({'Dstar'  :'[D*(2010)+ -> (D0 -> K- K+) pi+]CC',
                 'D0'     :'[D*(2010)+ -> ^(D0 -> K- K+) pi+]CC',
                 'Kminus' :'[D*(2010)+ -> (D0 -> ^K- K+) pi+]CC',
                 'Kplus'  :'[D*(2010)+ -> (D0 -> K- ^K+) pi+]CC',
                 'pisoft' :'[D*(2010)+ -> (D0 -> K- K+) ^pi+]CC'}) # and mark particles which we want to use in dtt.Decay (with ^ ?)!!
# Alternativley, use setDescriptorTemplate() to do all this in one line:
#dtt.setDescriptorTemplate('${Dstar}[D*(2010)+ -> ${D0}(D0 -> ${Kminus}K- ${Kplus}K+) ${pisoft}pi+]CC') # sets up both dtt.Decay and Branches
# Access branches with dtt.PARTICLENAME
dtt.D0.addTupleTool('TupleToolPropertime') # e.g. of adding tuple tools to specific particles
'''
All tuple tools start with DecayTreeTuple here:  https://gitlab.cern.ch/lhcb/Analysis/tree/master/Phys
      DecayTreeTuple           for the more general tools;
      DecayTreeTupleANNPID     for the NeuralNet-based PID tools;
      DecayTreeTupleDalitz     for Dalitz analysis;
      DecayTreeTupleJets       for obtaining information on jets;
      DecayTreeTupleMC         gives us access to MC-level information;
      DecayTreeTupleMuonCalib  for muon calibration tools;
      DecayTreeTupleReco       for reconstruction-level information, such as TupleToolTrackInfo;
      DecayTreeTupleTracking   for more detailed tools regarding tracking;
      DecayTreeTupleTrigger    for accessing to the trigger information of the candidates.
All info in src/.h files or in coresponding doxygen
'''
     
# Add LoKi HybridTools
dstar_hybrid = dtt.Dstar.addTupleTool('LoKi::Hybrid::TupleTool/LoKi_Dstar')
d0_hybrid = dtt.D0.addTupleTool('LoKi::Hybrid::TupleTool/LoKi_D0')
pisoft_hybrid = dtt.pisoft.addTupleTool('LoKi::Hybrid::TupleTool/LoKi_PiSoft')

preamble = ['DZ = VFASPF(VZ) - BPV(VZ)',
            'TRACK_MAX_PT = MAXTREE(ISBASIC & HASTRACK, PT, -1)']
dstar_hybrid.Preambulo = preamble
d0_hybrid.Preambulo = preamble

dstar_hybrid.Variables = {
  'mass': 'M',
  'mass_D0': 'CHILD(M, 1)',
  'pt': 'PT',
  'dz': 'DZ',
  'dira': 'BPVDIRA',
  'max_pt': 'MAXTREE(ISBASIC & HASTRACK, PT, -1)',
  'max_pt_preambulo': 'TRACK_MAX_PT',
  'n_highpt_tracks': 'NINTREE(ISBASIC & HASTRACK & (PT > 1500*MeV))'
}
d0_hybrid.Variables = {
  'mass': 'M',
  'pt': 'PT',
  'dira': 'BPVDIRA',
  'vtx_chi2': 'VFASPF(VCHI2)',
  'dz': 'DZ'
}
pisoft_hybrid.Variables = {
  'p': 'P',
  'pt': 'PT'
}


from Configurables import DaVinci
from PhysConf.Filters import LoKi_Filters

fltrs = LoKi_Filters ( STRIP_Code = "HLT_PASS_RE('StrippingD2hhPromptDst2D2KKLineDecision')" )
DaVinci().EventPreFilters = fltrs.filters('Filters')

# Configure DaVinci
DaVinci().UserAlgorithms += [dtt]
DaVinci().InputType = 'DST'
DaVinci().TupleFile = 'DVntuple.root'
DaVinci().PrintFreq = 1000
DaVinci().DataType = '2016'
DaVinci().Simulation = True
#DaVinci().RootInTES = '/Event/{0}'.format(stream) # for microDST
# Only ask for luminosity information when not using simulated data
DaVinci().Lumi = not DaVinci().Simulation
DaVinci().EvtMax = -1
DaVinci().CondDBtag = 'sim-20170721-2-vc-md100'
DaVinci().DDDBtag = 'dddb-20170721-3'


from GaudiConf import IOHelper

# Use the Local input data
IOHelper().inputFiles(['/eos/lhcb/user/a/aburke/00070793_00000565_7.AllStreams.dst'], clear=True)
