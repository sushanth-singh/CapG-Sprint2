#ifndef EMPLOYEE
#define EMPLOYEE

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<stdlib.h>
using namespace std;

class Employee
{ 
    public:
        
        Employee(){};
        Employee(string firstName, string lastName, string phone1, string phone2, string bU, string practice, string qualification, string areaOfExpertise, string ap1,string ap2,string ap3)
        {
            this->firstName=firstName;
            this->lastName=lastName;
            this->phone1=phone1;
            this->phone2=phone2;
            this->bU=bU;
            this->practice=practice;
            this->qualification=qualification;
            this->areaOfExpertise=areaOfExpertise;
            this->ap1=ap1;
            this->ap2=ap2;
            this->ap3=ap3;
        };
        string getFirstName();
        string getLastName();
        string getPhone1();
        string getPhone2();
        string getBu();
        string getPractice();
        string getQualification();
        string getAreaOfExpertise();
        string getAp1();
        string getAp2();
        string getAp3();
 
        //***********

        void setAp1(string ap1);
        void setAp2(string ap2);
        void setAp3(string ap3);    
        void setFirstName(string firstName);
        void setLastName(string lastName); 
        void setPhone1(string phone1);
        void setPhone2(string phone2);
        void setBu(string bU);
        void setPractice(string practice);
        void setQualification(string qualification);
        void setAreaOfExpertise(string areaOfExpertise);
        void setAssignedProject(string assignedProject);

        //***********

        void deallocateAssignedProject(string pId);
        int searchAssignedProject(string pId);
        static int getEmpId();
        void display();
    
     private:
        string firstName;
        string lastName;
        string phone1;
        string phone2;
        string bU;
        string practice;
        string qualification;
        string areaOfExpertise;
        string ap1;
        string ap2;
        string ap3;
};

#endif