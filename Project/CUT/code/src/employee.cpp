#include<../header/Employee.h>

string Employee::getFirstName(){
    return this->firstName;
 }

string Employee::getLastName(){
    return this->lastName;
}

string Employee::getPhone1(){
    return this->phone1;
}

string Employee::getPhone2(){
    return this->phone2;
}

string Employee::getBu(){
    return this->bU;
}

string Employee::getPractice(){
    return this->practice;
}

string Employee::getQualification(){
    return this->qualification;
}

string Employee::getAreaOfExpertise(){
    return this->areaOfExpertise;
}

string Employee::getAp1(){
    return this->ap1;
}

string Employee::getAp2(){
    return this->ap2;
}

string Employee::getAp3(){
    return this->ap3;
}


void Employee::setAp1(string ap1){
    this->ap1=ap1;
}

void Employee::setAp2(string ap2){
    this->ap2=ap2;
}

void Employee::setAp3(string ap3){
    this->ap3=ap3;
}

void Employee::deallocateAssignedProject(string pId){
    if(ap1==pId){
        this->ap1="0";
    }else if(ap2==pId){
        this->ap2="0";
    }else if(ap3==pId){
        this->ap3="0";
    }
}


int Employee::searchAssignedProject(string pId){
    if(ap1==pId){
        return 1;
    }else if(ap2==pId){
        return 1;
    }else if(ap3==pId){
        return 1;
    }
    return 0;
}


//***********

void Employee::setFirstName(string firstName){
    this->firstName=firstName;
}

void Employee::setLastName(string lastName){
    this->lastName=lastName;
}

void Employee::setPhone1(string phone1){
    this->phone1=phone1;
}

void Employee::setPhone2(string phone2){
        this->phone2=phone2;
}

void Employee::setBu(string bU){
    this->bU=bU;
}

void Employee::setPractice(string practice){
    this->practice=practice;
}

void Employee::setQualification(string qualification){

    this->qualification=qualification;
}

void Employee::setAreaOfExpertise(string areaOfExpertise){
    this->areaOfExpertise=areaOfExpertise;
}

void Employee::setAssignedProject(string assignedProject){
    if(this->ap1=="0"){
        ap1=assignedProject;
    }else if(this->ap2=="0"){
        ap2=assignedProject;
    }else if(this->ap3=="0"){
        ap3=assignedProject;
    }
}




//***********


void Employee::display(){
    cout<<" FIRST NAME: "<<this->firstName;
    cout<<" LAST NAME: "<<this->lastName;
    cout<<" PHONE 1: "<<this->phone1;
    cout<<" PHONE 2: "<<this->phone2;
    cout<<" BUSINESS UNIT:"<<this->bU;
    cout<<" PRACTICE: "<<this->practice;
    cout<<" QUALIFICATION: "<<this->qualification;
    cout<<" AREA OF Expertise: "<<this->areaOfExpertise;
    cout<<"ASSIGNED PROJECT 1: "<<this->ap1<<endl;
    cout<<"ASSIGNED PROJECT 2: "<<this->ap2<<endl;
    cout<<"ASSIGNED PROJECT 3: "<<this->ap3<<endl;
    cout<<endl;
}
