#include "DQM/HcalTasks/interface/ZDCQIE10Task.h"
using namespace std;
using namespace hcaldqm;
using namespace hcaldqm::constants;
using namespace hcaldqm::filter;
ZDCQIE10Task::ZDCQIE10Task(edm::ParameterSet const& ps) 
    
:DQTask(ps),hcalDbServiceToken_(esConsumes<HcalDbService, HcalDbRecord, edm::Transition::BeginRun>()){
//tags
    _tagQIE10 = ps.getUntrackedParameter<edm::InputTag>("tagQIE10", edm::InputTag("hcalDigis","ZDC"));
    _tokQIE10 = consumes<QIE10DigiCollection>(_tagQIE10);
}

/* virtual */ void ZDCQIE10Task::bookHistograms(DQMStore::IBooker& ib, edm::Run const& r, edm::EventSetup const& es) {
 
    DQTask::bookHistograms(ib, r, es);  
    ib.cd();
    edm::ESHandle<HcalDbService> dbs = es.getHandle(hcalDbServiceToken_);
    _emap = dbs->getHcalMapping();
    // Book LED calibration channels from emap                                                                                                                                                             
    std::vector<HcalElectronicsId> eids = _emap->allElectronicsId();
    _ehashmap.initialize(_emap, electronicsmap::fD2EHashMap);
      
    //    BOOK HISTOGRAMS                                                                                                                                                                                          
    std::string histoname;
    histoname = "Crate28";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/DigiSize");
    _cDigiSize_Crate[0] = ib.book1DD(histoname.c_str(), histoname.c_str(),21,-0.5,20.5);
    _cDigiSize_Crate[0]->setAxisTitle("DigiSize", 1);
    _cDigiSize_Crate[0]->setAxisTitle("N", 2);
    
    histoname = "FED1136";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/DigiSize");
    _cDigiSize_FED[0] = ib.book1DD(histoname.c_str(), histoname.c_str(),21,-0.5,20.5);
    _cDigiSize_FED[0]->setAxisTitle("DigiSize", 1);
    _cDigiSize_FED[0]->setAxisTitle("N", 2);
    
    histoname = "ZDCM";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC");
    _cADC_PM[0] = ib.book1DD(histoname.c_str(), histoname.c_str(),256, 0, 256);
    _cADC_PM[0]->setAxisTitle("ADC", 1);
    _cADC_PM[0]->setAxisTitle("N", 2);
    
    histoname = "ZDCP";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC");
    _cADC_PM[1] = ib.book1DD(histoname.c_str(), histoname.c_str(),256, 0, 256);
    _cADC_PM[1]->setAxisTitle("ADC", 1);
    _cADC_PM[1]->setAxisTitle("N", 2);
    
    histoname = "ZDCM";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADCvsTS");
    _cADC_vs_TS_PM[0] = ib.book2DD(histoname.c_str(), histoname.c_str(),10, 0, 10,256, 0, 256);
    _cADC_vs_TS_PM[0]->setAxisTitle("TS", 1);
    _cADC_vs_TS_PM[0]->setAxisTitle("ADC", 2);
    
    histoname = "ZDCP";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADCvsTS");
    _cADC_vs_TS_PM[1] = ib.book2DD(histoname.c_str(), histoname.c_str(),10, 0, 10,256, 0, 256);
    _cADC_vs_TS_PM[1]->setAxisTitle("TS", 1);
    _cADC_vs_TS_PM[1]->setAxisTitle("ADC", 2);
    
    histoname = "Crate28";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/Occupancy/Crate");
    _cOccupancy_Crate[0] = ib.book2DD(histoname.c_str(), histoname.c_str(),12,0,12,144,0,144);
    _cOccupancy_Crate[0] ->setAxisTitle("SlotuTCA", 1);
    _cOccupancy_Crate[0] ->setAxisTitle("FiberuTCAFiberCh", 2);
    
    histoname = "Crate28S3";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/Occupancy/CrateSlote");
    _cOccupancy_CrateSlot[0] = ib.book2DD(histoname.c_str(), histoname.c_str(),24,0,24,6,0,6);
    _cOccupancy_CrateSlot[0] ->setAxisTitle("SlotuTCA", 1);
    _cOccupancy_CrateSlot[0] ->setAxisTitle("FiberCh", 2);

    histoname = "uTCA_for_FED1136";
    ib.setCurrentFolder("Hcal/ZDCQIE10Task/Occupancy/Electronics");
    _cOccupancy_ElectronicsuTCA[0] = ib.book1DD(histoname.c_str(), histoname.c_str(),12,0,12);
    _cOccupancy_ElectronicsuTCA[0]->setAxisTitle("N", 1);
    _cOccupancy_ElectronicsuTCA[0]->setAxisTitle("SlotuTCA", 1);
        
    //book histos per channel
    //std::string histoname;
    for (int channel = 1; channel < 9; channel++) {
	// EM Pos
	HcalZDCDetId didp(HcalZDCDetId::EM, true, channel);
	// cout << " ZDC EM P eid " <<didp()<< " ch "<<channel<<endl;
	
	histoname = "EM_P_" + std::to_string(channel) + "_1";
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didp()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didp()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("sum ADC", 2);
	
	// EM Minus
	HcalZDCDetId didm(HcalZDCDetId::EM, false, channel);
	
	//cout << " ZDC EM M eid " <<didm()<< " ch "<<channel<<endl;
	
	histoname = "EM_M_" + std::to_string(channel) + "_1";
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didm()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didm()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("sum ADC", 2);
    }
    
    for (int channel = 1; channel < 5; channel++) {
	// HAD Pos
	HcalZDCDetId didp(HcalZDCDetId::HAD, true, channel);
	
	//cout << " ZDC HAD P eid " <<didp()<< " ch "<<channel<< endl;
	
	histoname = "HAD_P_" + std::to_string(channel) + "_" + std::to_string(channel + 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didp()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didp()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("sum ADC", 2);
	
	// HAD Minus
	HcalZDCDetId didm(HcalZDCDetId::HAD, false, channel);
	
	//cout << " ZDC HAD M eid " <<didm()<< " ch "<<channel<<endl;
	
	histoname = "HAD_M_" + std::to_string(channel) + "_" + std::to_string(channel + 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didm()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didm()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("sum ADC", 2);
    }
    
    for (int channel = 1; channel < 17; channel++) {
	// RPD Pos
	HcalZDCDetId didp(HcalZDCDetId::RPD, true, channel);
	
	//cout << " ZDC RPD Pos eid " <<didp()<< " ch "<<channel<<endl;
	
	histoname = "RPD_P_" + std::to_string(channel) + "_2";
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didp()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didp()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didp()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didp()]->setAxisTitle("sum ADC", 2);
	
	// RPD Minus
	HcalZDCDetId didm(HcalZDCDetId::RPD, false, channel);
	histoname = "RPD_M_" + std::to_string(channel) + "_2";
	
	//cout << " ZDC RPD M eid " <<didm()<< " ch "<<channel<<endl;
	
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_perChannel");
	_cADC_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 256, 0, 256);
	_cADC_EChannel[didm()]->setAxisTitle("ADC", 1);
	_cADC_EChannel[didm()]->setAxisTitle("N", 2);
	ib.setCurrentFolder("Hcal/ZDCQIE10Task/ADC_vs_TS_perChannel");
	_cADC_vs_TS_EChannel[didm()] = ib.book1DD(histoname.c_str(), histoname.c_str(), 10, 0, 10);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("TS", 1);
	_cADC_vs_TS_EChannel[didm()]->setAxisTitle("sum ADC", 2);
    }
    
    
}

/* virtual */ 
void ZDCQIE10Task::_process(edm::Event const& e, edm::EventSetup const&) {
    
    edm::Handle<QIE10DigiCollection> digis;
    if (!e.getByToken(_tokQIE10, digis))
	edm::LogError("Collection QIE10DigiCollection for ZDC isn't available" + _tagQIE10.label() + " " +
		      _tagQIE10.instance());
    
    for (auto it = digis->begin(); it != digis->end(); it++) {
	const QIE10DataFrame digi = static_cast<const QIE10DataFrame>(*it);
	
	HcalZDCDetId const& did = digi.detid();
	//cout << " ZDC did" <<did()<<endl;
	uint32_t rawid = _ehashmap.lookup(did);
	
	if (rawid == 0) {
	    //cout << " rawid = 0 " <<endl;
	    continue;
	} else {
	    //cout << " subdet" << did.subdetId() <<endl;
	}
	
	HcalElectronicsId const& eid(rawid);
	if (eid.isUTCAid()) {
	    //	if (eid.isTriggerChainId())
	    //cout << eid.crateId() << ',' << eid.slot() << ',' << eid.fiberIndex() << ',' << eid.fiberChanId()<<endl;
	}
	
	
	_cDigiSize_Crate[0]->Fill(digi.samples());
	
	if (_ptype != fOffline) {  // hidefed2crate
	    
	    _cDigiSize_FED[0]->Fill(digi.samples());
	    
	    _cOccupancy_ElectronicsuTCA[0]->Fill(eid.slot());
	    
	}
	if (_ptype == fOnline || _ptype == fLocal) {
	    _cOccupancy_Crate[0]->Fill(eid.slot(),eid.fiberIndex());
	    _cOccupancy_CrateSlot[0]->Fill(eid.slot(),eid.fiberChanId());
	}
	for (int i = 0; i < digi.samples(); i++) {
	    
	    //cout << " zside()    " << did.zside() <<endl;
	    // ZDC Plus
	    if (did.zside() > 0 ){ 
		_cADC_PM[1]->Fill(digi[i].adc());
		_cADC_vs_TS_PM[1]->Fill(i, digi[i].adc());
		
	    }
	    // ZDC Minus
	    else {
		_cADC_PM[0]->Fill(digi[i].adc());
		_cADC_vs_TS_PM[0]->Fill(i, digi[i].adc()); 
		
	    }
	    
	    // iter over all samples
	    if (_cADC_EChannel.find(did()) != _cADC_EChannel.end()) {
		_cADC_EChannel[did()]->Fill(digi[i].adc());
	    }
	    if (_cADC_vs_TS_EChannel.find(did()) != _cADC_vs_TS_EChannel.end()) {
		_cADC_vs_TS_EChannel[did()]->Fill(i, digi[i].adc());
	    }
	}
    }
}
//std::shared_ptr<hcaldqm::Cache> ZDCQIE10Task::globalBeginLuminosityBlock(edm::LuminosityBlock const& lb,
//									 edm::EventSetup const& es) const {
//  return DQTask::globalBeginLuminosityBlock(lb, es);
//}

/* virtual */ 
//void ZDCQIE10Task::globalEndLuminosityBlock(edm::LuminosityBlock const& lb, edm::EventSetup const& es) {
//  auto lumiCache = luminosityBlockCache(lb.index());
    
//  DQTask::globalEndLuminosityBlock(lb, es);
//}



DEFINE_FWK_MODULE(ZDCQIE10Task);
