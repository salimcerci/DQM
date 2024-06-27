import FWCore.ParameterSet.Config as cms

from DQMServices.Core.DQMEDAnalyzer import DQMEDAnalyzer
zdcqie10Task = DQMEDAnalyzer(
	"ZDCQIE10Task",
	#	standard
	name = cms.untracked.string("ZDCQIE10Task"),
	debug = cms.untracked.int32(0),
	runkeyVal = cms.untracked.int32(0),
	runkeyName = cms.untracked.string("pp_run"),
        ptype = cms.untracked.int32(0),
        mtype = cms.untracked.bool(True),
        subsystem = cms.untracked.string("Hcal"),
        	#	tag
	tagQIE10 = cms.untracked.InputTag("hcalDigis", 'ZDC'),

	#	cuts, 
	cut = cms.untracked.double(20),
	ped = cms.untracked.int32(4)
)
