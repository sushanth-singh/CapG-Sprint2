#ifndef PROJECT
#define PROJECT

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Project
{
    public:
        Project(){};
        Project(string projId,string type,string desc, string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated)
        {
            this->projId=projId;
            this->type=type;
            this->desc=desc;
            this->clientName=clientName;
            this->stDate=stDate;
            this->edDate=edDate;
            this->profCenter=profCenter;
            this->priority=priority;
            this->noOfEmp=noOfEmp;
            this->noOfAllocated=noOfAllocated;
           // projId=projId+1;
            
        };

        string getType();
        string getdesc();
        string getclientName();
        string getstDate();
        string getedDate();    
        string getprofCenter();
        string getPriority();
        int    getNoOfEmp();
        int    getNoOfAllocated();
        string getprojId();

        //***********
        void setType(string type);
        void setdesc(string desc);
        void setclientName(string clientName);
        void setstDate(string stDate);
        void setedDate(string edDate);
        void setprofCenter(string profCenter);
        void setPriority(string priority);
        void setNoOfEmp(int noOfEmp);  
        void setNoOfAllocated(int noOfAllocated);   
        
        //***********

       virtual void display();

       private:
        string projId;//p001|telecom|
        string type;
        string desc;
        string clientName;
        string stDate;
        string edDate;
        string profCenter;
        string priority;
        int noOfEmp;
        int noOfAllocated;
    
};
class telecom : public Project
{
    public :
    telecom():Project(){}
    telecom(string projId,string type,string desc,string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated,string internetProvider,string  satelliteLinks,string  telecomStandards):Project( projId,type,desc,clientName,stDate,  edDate,  profCenter,  priority, noOfEmp,noOfAllocated)
    {
        this->internetProvider = internetProvider;
        this->satelliteLinks = satelliteLinks;
        this->telecomStandards = telecomStandards;
    }
    void setInternetProvider(string internetProvider);
    void setSatelliteLinks(string satelliteLinks);
    void setTelecomStandards(string  telecomStandards);

    //==================================================
    string getInternetProvider();
    string getSatelliteLinks();
    string getTelecomStandards();
    
    void display();

    private:
    string internetProvider;
    string  satelliteLinks;
    string  telecomStandards;

};
class banking : public Project
{
    public :
    banking():Project(){}
        banking(string projId,string type,string desc, string clientName, string stDate, string edDate, string profCenter, string priority, int noOfEmp,int noOfAllocated,string currentAccountModulePurchased,string loanAccountModulePurchased,string  customizations ):Project(projId,type, desc,clientName,stDate,  edDate,  profCenter,  priority, noOfEmp , noOfAllocated)
        {
            this->currentAccountModulePurchased = currentAccountModulePurchased;
            this->loanAccountModulePurchased = loanAccountModulePurchased;
            this->customizations= customizations;
        }
    void setCurrentAccountModulePurchased(string currentAccountModulePurchased);
    void setLoanAccountModulePurchased (string loanAccountModulePurchased);
    void setCustomizations(string customizations);
  
    //==================================================
    string getCurrentAccountModulePurchased();
    string getLoanAccountModulePurchased ();
    string getCustomizations();
  
    void display();

    private:
    string currentAccountModulePurchased;
    string loanAccountModulePurchased ;
    string  customizations  ;

};

#endif