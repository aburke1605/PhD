from Configurables import DecayTreeTuple
from DecayTreeTuple.Configuration import *

# Stream  and stripping line we want to use
stream = 'AllStreams'
line = 'D2hhPromptDst2D2KKLine'

# Create an ntuple to capture D*+ decays from the StrippingLine line
dtt = DecayTreeTuple('TupleDstToD0pi_D0ToKK')
dtt.Inputs = ['/Event/{0}/Phys/{1}/Particles'.format(stream, line)] #Phys/{0}/Particles'.format(line)] # for microDST
dtt.Decay = '[D*(2010)+ -> (D0 -> K- K+) pi+]CC'


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
