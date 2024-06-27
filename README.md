# DQM
Updated ZDCQIE10Task.cc, ZDCQIE10Task.h, ZDCQIE10Task.py and hcal_dqm_sourceclient-live_cfg.py for the ZDC detector.

ssh username@lxplus8.cern.ch

in any work directory

cmsrel CMSSW_13_2_5_patch1

cd CMSSW_13_2_5_patch1/src

git clone https://github.com/salimcerci/DQM.git

scram b

cmsenv

cmsRun DQM/Integration/python/clients/hcal_dqm_sourceclient-live_cfg.py inputFiles=/eos/cms/store/group/dpg_hcal/comm_hcal/PFG/backup_raw/HIHLTPhysics-HIRun2023A-RAW-v1-374344.root runkey=hi_run

cd upload/

root -l DQM_V0001_Hcal_R000374344.root
