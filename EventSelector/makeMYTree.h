//------------------------------------------
//   makeMYTrees.h
//   definitions for core analysis
//
//
//   author: Lukas Marti
//-------------------------------------------
#ifndef makeMYTree_h
#define makeMYTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TString.h>
#include <TH1F.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "TLorentzVector.h"
#include "TParameter.h"
//#include "makeMYTree/MultiLepEvent.h"


class makeMYTree  {

 public:

  // Constructor
  // - MCID => will be used to name the tree
  // - syst => will be used to name the file
  // That way all files are hadd'able
  // Optional arguments fileName and treeName can override default naming convention
  makeMYTree(TString MCID, TString syst, TString fileName="", TString treeName="");
  ~makeMYTree();

  TFile* file; 
  TTree* tree;
  TString mymcid;

  std::vector<Double_t> bMY_MM_weight;
  std::vector<Double_t> bMY_syst_MM_up;
  std::vector<Double_t> bMY_syst_MM_down;
  std::vector<TString>  bMY_MM_key;
                                    
  Float_t                                    bMY_Weight;                                             
  Float_t                                    bMY_lep1Pt;                                                
  Float_t                                    bMY_lep1Eta;                                                
  Float_t                                    bMY_lep1Phi;                                                
  Float_t                                    bMY_lep1Et;                                              
  Float_t                                    bMY_lep2Pt;                                                 
  Float_t                                    bMY_lep2Eta;                                                
  Float_t                                    bMY_lep2Phi;                                                
  Float_t                                    bMY_lep2Et;                                                  
  Float_t                                    bMY_jet1Pt;                                                 
  Float_t                                    bMY_jet1Eta;                                                
  Float_t                                    bMY_jet1Phi;                                                 
  Float_t                                    bMY_jet2Pt;                                                 
  Float_t                                    bMY_jet2Eta;                                                
  Float_t                                    bMY_jet2Phi;                                                 
  Float_t                                    bMY_jet3Pt;                                                 
  Float_t                                    bMY_jet3Eta;                                                
  Float_t                                    bMY_jet3Phi;                                              
  Float_t                                    bMY_jetB;                                             
  Float_t                                    bMY_jetLight;                                             
  // Float_t                                    bMY_jetTot;                                              
  Float_t                                    bMY_met;                                               
  Float_t                                    bMY_met_sig;                                              
  Float_t                                    bMY_ht;                                               
  Float_t                                    bMY_rt;                                              
  Float_t                                    bMY_mt;                                              
  Float_t                                    bMY_mt2;                                              
  Float_t                                    bMY_et;                                              
  Float_t                                    bMY_dPhiLeps;                                              
  Float_t                                    bMY_dPhiLLMet;                                              
  Float_t                                    bMY_dPhiCloseMet;                                              
  Float_t                                    bMY_dPhiLeadMet;                                                         
  Float_t                                    bMY_mll;                                                               
  Float_t                                    bMY_mjj;                                                             
  TString                                    bMY_Dileptons;                                                       
  Int_t                                      bMY_isOS;                                                    
  Float_t                                    bMY_CrossSection;                                                   
  ULong64_t                                  bMY_EventID;                                           
  Int_t                                      bMY_RunNumber;                                             
  TString                                    bMY_RunPeriod;           
  Int_t                                      bMY_n_bjetPt20;
  Int_t                                      bMY_n_ljetPt40; 
  Int_t                                      bMY_jetEtaCentral;  
  Int_t                                      bMY_jetEtaForward50;                                              

                                               

  //virtual void InitializeOutput(TFile** file, TString filename,TTree** tree, TString treename );
  void ClearOutputBranches();

  void setSumOfMcWeights(double sumOfMcWeights);


  void WriteTree();

};
#endif // #ifdef makeMYTrees_cxx
