#include "../header/header.h"


/********************************************
 * *FUNCTION NAME : saveEmployee() 
 *
 * *DESCRIPTION   : This function saves the employee file.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void saveEmployee(map<string,Employee> &E)
{

  ofstream output;
  output.open(EMPPATH,ios::out);
  if (!output.is_open())
  {
    cout<<"UNABLE TO OPEN INPUT FILE EMPLOYEE.TXT" << endl;
    //cout<<"it is saving";
    return ;
  }
  map<string,Employee>::iterator itr;
  for(itr = E.begin(); itr != E.end(); itr++) 
  {        
    output<<itr->first<<"|"<<
      itr->second.getFirstName()<<"|"<<
      itr->second.getLastName()<<"|"<<
      itr->second.getPhone1()<<"|"<<
      itr->second.getPhone2()<<"|"<<
      itr->second.getBu()<<"|"<<
      itr->second.getPractice()<<"|"<<
      itr->second.getQualification()<<"|"<<
      itr->second.getAreaOfExpertise()<<"|"<<
      itr->second.getAp1()<<"|"<<
      itr->second.getAp2()<<"|"<<
      itr->second.getAp3()<<"|"<<endl; 
  }
  output.close();
}


/********************************************
 * *FUNCTION NAME : saveProject() 
 *
 * *DESCRIPTION   : This function saves the project file.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void saveProject(map<string,Project *> &P)
{
  ofstream output1;
  output1.open(PRJPATH,ios::out);
  if (!output1.is_open())
  {
        cout<<"UNABLE TO OPEN INPUT FILE PROJECT.TXT" << endl;
        return ;
  }
  map<string,Project *>::iterator itr1;
  for(itr1 = P.begin(); itr1 != P.end(); itr1++) 
  {        
    
    string type =itr1->second->getType();
    transform(type.begin(), type.end(), type.begin(), ::tolower);
    if(type == "telecom")
    {
      
      telecom *tpr=(telecom *)itr1->second;
      output1<<tpr->getprojId()<<"|"<<
        tpr->getType()<<"|"<<
        tpr->getdesc()<<"|"<<
        tpr->getclientName()<<"|"<<
        tpr->getstDate()<<"|"<< 
        tpr->getedDate()<<"|"<<
        tpr->getprofCenter()<<"|"<<
        tpr->getPriority()<<"|"<<
        tpr->getNoOfEmp()<<"|"<<
        tpr->getNoOfAllocated()<<"|"<<
        tpr->getInternetProvider()<<"|"<<
        tpr->getSatelliteLinks()<<"|"<<
        tpr->getTelecomStandards()<<endl;  
    }
    else if(type == "banking")
    { 
      banking *bpr=(banking *)itr1->second;
      output1<<bpr->getprojId()<<"|"<<
        bpr->getType()<<"|"<<
        bpr->getdesc()<<"|"<<
        bpr->getclientName()<<"|"<<
        bpr->getstDate()<<"|"<< 
        bpr->getedDate()<<"|"<<
        bpr->getprofCenter()<<"|"<<
        bpr->getPriority()<<"|"<<
        bpr->getNoOfEmp()<<"|"<<
        bpr->getNoOfAllocated()<<"|"<<
        bpr->getCurrentAccountModulePurchased()<<"|"<<
        bpr->getLoanAccountModulePurchased()<<"|"<<
        bpr->getCustomizations()<<endl;  
    }
    else
    {
      output1<<itr1->first<<"|"<<
        itr1->second->getType()<<"|"<<
        itr1->second->getdesc()<<"|"<<
        itr1->second->getclientName()<<"|"<<
        itr1->second->getstDate()<<"|"<< 
        itr1->second->getedDate()<<"|"<<
        itr1->second->getprofCenter()<<"|"<<
        itr1->second->getPriority()<<"|"<<
        itr1->second->getNoOfEmp()<<"|"<<
        itr1->second->getNoOfAllocated()<<endl;
    
    }
    free(itr1->second);
  }
  output1.close();
}


int saveFile(map<string,Project *> &P,map<string,Employee> &E)
{
  saveEmployee(E);
  saveProject(P);
  return 0;  
}
