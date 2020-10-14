# TO RUN: $ lb-run --ext=ipython DaVinci/v45r1 ipython -i dstreader.py example_0001__7.AllStreams.dst

#       [1] nodes(evt) (to list most interesting TES locations)

#       [1] line = 'D2hhPrompDst2D2KKLine'
#       [2] advance(line)
#       ### Built candidates now found at /Event/AllStreams/Phys/D2hhPromptDst2D2KKLine/Particles
#       [3] cands = evt['/Event/AllStreams/Phys/{0}/Particles'.format(line)]
#       [4] print cands.size() (tells how many candidates there are in this event)
#       [5] print cands[0] (access the first one)

#       [1] print_decay = appMgr.toolsvc().create('PrintDecayTreeTool', interface = 'IPrintDecayTreeTool')
#       [2] print_decay.printTree(cands[0]) (prints entire decay tree of first candidate)

import sys

import GaudiPython as GP
from GaudiConf import IOHelper
from Configurables import DaVinci


def nodes(evt, node=None):
  """List all nodes in `evt`"""
  nodenames = []

  if node is None:
    root = evt.retrieveObject('')
    node = root.registry()

  if node.object():
    nodenames.append(node.identifier())
    for l in evt.leaves(node):
      # skip a location that takes forever to load
      # XXX How to detect these automatically??
      if 'Swum' in l.identifier():
        continue
      
      temp = evt[l.identifier()]
      nodenames += nodes(evt, l)
  else:
    nodenames.append(node.identifier())

  return nodenames


def advance(decision):
  """Advance until stripping decision is true, returns number of events by which we advanced"""
  n = 0
  while True:
    appMgr.run(1)

    if not evt['/Event/Rec/Header']:
      print 'Reached end of input files'
      break
    
    n += 1
    dec = evt['/Event/Strip/Phys/DecReports']
    if dec.hasDecisionName('Stripping{0}Decision'.format(decision)):
      break

  return n


dv = DaVinci()
dv.DataType = '2016' # need to change depending on file?
dv.Simulation = True

# Pass file to open as first command line argument
inputFiles = [sys.argv[-1]]
IOHelper('ROOT').inputFiles(inputFiles)

appMgr = GP.AppMgr()
evt = appMgr.evtsvc()

appMgr.run(1)
evt.dump()


from LoKiPhys.decorators import PX, PY, PZ, PT, M, E, GeV

def find_tracks(particle):
  tracks = []
  if particle.isBasicParticle():
    proto = particle.proto()
    if proto:
      track = proto.track()
      if track:
        try:
	  tracks.append(particle.data())
	except AttributeError:
	  tracks.append(particle)
  else:
    for child in particle.daughters():
      tracks +=find_tracks(child)
  return tracks

from LoKiPhys.decorators import VCHI2, VFASPF, DIRA, IPCHI2, MAXTREE, ISBASIC, HASTRACK, SUMTREE, ABSID, CHILD
from GaudiPython.Bindings import gbl
from LoKiCore.functions import in_range, dump1, monitor
