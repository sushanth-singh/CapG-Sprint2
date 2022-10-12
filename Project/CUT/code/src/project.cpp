#include <../header/Project.h>
  
string Project::getType()
{
    return this->type;
}

string Project::getdesc(){
    return this->desc;
}

string Project::getclientName(){
    return this->clientName;
}

string Project::getstDate(){
    return this->stDate;
}

string Project::getedDate(){
    return this->edDate;
}

string Project::getprofCenter(){
    return this->profCenter;
}

string Project::getPriority(){
return this->priority;
}

int Project::getNoOfEmp(){
    return this->noOfEmp;
}

int Project::getNoOfAllocated(){
    return this->noOfAllocated;
}

        
string Project::getprojId(){
    return this->projId;
}

//***********
void Project::setType(string type)
{
    this->type = type;
}
void Project::setdesc(string desc){
    this->desc=desc;
}

void Project::setclientName(string clientName){
    this->clientName=clientName;
}

void Project::setstDate(string stDate){
    this->stDate=stDate;
}

void Project::setedDate(string edDate){
        this->edDate=edDate;
}

void Project::setprofCenter(string profCenter){
    this->profCenter=profCenter;
}

void Project::setPriority(string priority){
    this->priority=priority;
}

void Project::setNoOfEmp(int noOfEmp){
    this->noOfEmp=noOfEmp;
}       

void Project::setNoOfAllocated(int noOfAllocated){
    this->noOfAllocated=noOfAllocated;
}       

//***********

void Project::display(){
    
    cout<<" Project Id: "<<this->projId;
    cout<<" Project Type: "<<this->type;
    cout<<" FIRST NAME: "<<this->desc;
    cout<<" LAST NAME: "<<this->clientName;
    cout<<" PHONE 1: "<<this->stDate;
    cout<<" PHONE 2: "<<this->edDate;
    cout<<" PROFIT CENTER:"<<this->profCenter;
    cout<<" PRIORITY: "<<this->priority;
    cout<<" NUMBER OF EMPLOYEES: "<<this->noOfEmp;
    cout<<" NUMBER OF Allocated EMPLOYEES : "<<this->noOfAllocated<<endl;
}


void telecom::setInternetProvider(string internetProvider)
{
    this->internetProvider = internetProvider;
}
void telecom::setSatelliteLinks(string satelliteLinks)
{
    this->satelliteLinks = satelliteLinks; 
}
void telecom::setTelecomStandards(string  telecomStandards)
{
    this->telecomStandards = telecomStandards; 
}

//==================================================
string telecom::getInternetProvider()
{
    return  this->internetProvider;
}
string telecom::getSatelliteLinks()
{
    return this->satelliteLinks;
}
string telecom::getTelecomStandards()
{
    return this->telecomStandards;
}

void telecom::display(){
        cout<<"teecom display"<<endl;
        Project::display();
        cout<<"\n:internetProvider"<<this->internetProvider<<endl;
        cout<<"\n:satelliteLinks "<<this->satelliteLinks<<endl;
        cout<<"\n:telecomStandards "<<this->telecomStandards<<endl;
}


void banking::setCurrentAccountModulePurchased(string currentAccountModulePurchased)
{
    this->currentAccountModulePurchased = currentAccountModulePurchased;
}
void banking::setLoanAccountModulePurchased (string loanAccountModulePurchased )
{
    this->loanAccountModulePurchased  = loanAccountModulePurchased ; 
}
void banking::setCustomizations(string customizations )
{
    this->customizations = customizations; 
}

//==================================================
string banking::getCurrentAccountModulePurchased()
{
    return this->currentAccountModulePurchased;
}
string banking::getLoanAccountModulePurchased ()
{
    return this->loanAccountModulePurchased;
}
string banking::getCustomizations()
{
    return this->customizations;
}
void banking::display(){
        cout<<"Banking display"<<endl;
        Project::display();
        cout<<"\n:currentAccountModulePurchased"<<this->currentAccountModulePurchased<<endl;
        cout<<"\n: loanAccountModulePurchased"<<this->loanAccountModulePurchased<<endl;
        cout<<"\n:customizations "<<this->customizations<<endl;
}