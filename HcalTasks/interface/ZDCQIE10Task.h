#ifndef ZDCQIE10Task_h
#define ZDCQIE10Task_h

/*
 *	file:			ZDCQIE10Task.h
 *	Author:			Quan Wang
 *	Description:
 *		Task for ZDC Read out
 */

#include "DQM/HcalCommon/interface/ElectronicsMap.h"
#include "DQM/HcalTasks/interface/DigiTask.h"
#include "DQM/HcalCommon/interface/DQTask.h"
#include "DQM/HcalCommon/interface/Utilities.h"
#include "DQM/HcalCommon/interface/HashFilter.h"
#include "DQM/HcalCommon/interface/ElectronicsMap.h"
#include "DQM/HcalCommon/interface/Container1D.h"
#include "DQM/HcalCommon/interface/Container2D.h"
#include "DQM/HcalCommon/interface/ContainerProf1D.h"
#include "DQM/HcalCommon/interface/ContainerProf2D.h"
#include "DQM/HcalCommon/interface/ContainerSingle1D.h"
#include "DQM/HcalCommon/interface/ContainerSingle2D.h"
#include "DQM/HcalCommon/interface/ContainerSingleProf2D.h"
#include "DQM/HcalCommon/interface/ContainerXXX.h"



class ZDCQIE10Task : public hcaldqm::DQTask {
public:
    ZDCQIE10Task(edm::ParameterSet const &);
    ~ZDCQIE10Task() override {}
    
    void bookHistograms(DQMStore::IBooker &, edm::Run const &, edm::EventSetup const &) override;
    //    std::shared_ptr<hcaldqm::Cache> globalBeginLuminosityBlock(edm::LuminosityBlock const &,
    //							       edm::EventSetup const &) const override;
    //void globalEndLuminosityBlock(edm::LuminosityBlock const &, edm::EventSetup const &) override;
    
    
    
    
protected:
    void _process(edm::Event const&, edm::EventSetup const&) override;
    
    //	tags
    edm::InputTag _tagQIE10;
    edm::EDGetTokenT<QIE10DigiCollection> _tokQIE10;
    edm::ESGetToken<HcalDbService, HcalDbRecord> hcalDbServiceToken_;
    
    //emap
    hcaldqm::electronicsmap::ElectronicsMap _ehashmap;  // online only
        
    //	hcaldqm::Containers
    std::map<uint32_t, MonitorElement*> _cADC_EChannel;
    std::map<uint32_t, MonitorElement*> _cADC_vs_TS_EChannel;
    std::map<uint32_t, MonitorElement*> _cDigiSize_Crate;
    std::map<uint32_t, MonitorElement*>_cDigiSize_FED;
    std::map<uint32_t, MonitorElement*> _cADC_PM;    
    std::map<uint32_t, MonitorElement*> _cADC_vs_TS_PM;
    std::map<uint32_t, MonitorElement*> _cOccupancy_FEDuTCA;
    std::map<uint32_t, MonitorElement*> _cOccupancy_ElectronicsuTCA;
    std::map<uint32_t, MonitorElement*> _cOccupancy_Crate;
    std::map<uint32_t, MonitorElement*> _cOccupancy_CrateSlot;
    

        

    };

#endif
