#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<stdlib.h>
#include "header.h"
using namespace std;

class Employee
{
    private:
        static int EmpId;
        string firstName;
        string lastName;
        string phone1;
        string phone2;
        string bU;
        string practice;
        string qualification;
        string areaOfExpertise;
        vector <string> assignedProject;
        int count;
        
    public:
        
        Employee(){};
        Employee(string firstName, string lastName, string phone1, string phone2, string bU, string practice, string qualification, string areaOfExpertise)
        {
            this->firstName=firstName;
            this->lastName=lastName;
            this->phone1=phone1;
            this->phone2=phone2;
            this->bU=bU;
            this->practice=practice;
            this->qualification=qualification;
            this->areaOfExpertise=areaOfExpertise;
            EmpId=EmpId+1;
            this->count=0;
        };

        void clearAssigned(){
               this->assignedProject.clear();
        }

        string getFirstName(){
            return this->firstName;
        }

        string getLastName(){
            return this->lastName;
        }

        string getPhone1(){
            return this->phone1;
        }

        string getPhone2(){
            return this->phone2;
        }
        
        string getBu(){
            return this->bU;
        }

        string getPractice(){
            return this->practice;
        }

        string getQualification(){
            return this->qualification;
        }

        string getAreaOfExpertise(){
            return this->areaOfExpertise;
        }
        
        vector<string> getAssignedProject(){
            return this->assignedProject;
        }

        void deallocateAssignedProject(string pId){
            for(vector<string>::iterator it= this->assignedProject.begin(); it != this->assignedProject.end(); it++)
            { 
                if ( *it == pId)
                {
                    this->assignedProject.erase(it);
                    break;
                }
            }
        }

        
        int searchAssignedProject(string pId){
            for(vector<string>::iterator it= this->assignedProject.begin(); it != this->assignedProject.end(); it++)
            { 
                if ( *it == pId)
                {
                   return 1;
                   break;
                }
            }
            return 0;
        }


        static int getEmpId(){
            return EmpId;
        }

        //***********
        int setFirstName(string firstName){
            if(validNames(firstName)){
            this->firstName=firstName;
            return 1;
        }else{
            return 0;
        }
        }

        int setLastName(string lastName){    
        if(validNames(firstName)){
            this->lastName=lastName;
            return 1;
        }else{
            return 0;
        }
        }
    
        int setPhone1(string phone1){
            if(validNumber(phone1)){
                this->phone1=phone1;
             return 1;
            }
            else{
                 return 0;
            }
        }

        int setPhone2(string phone2){
            if(validNumber(phone2)){
            this->phone2=phone2;
            return 1;
            }
            else{
                return 0;
            }
        }
        
        int setBu(string bU){
            if(validBu(bU)){
                this->bU=bU;
                return 1;
            }else{
                return 0;
            }
            
        }

        int setPractice(string practice){
                if(validBu(practice)){
                 this->practice=practice;
                 return 1;
                }
                else{
                    return 0;
                }
        }


        int setQualification(string qualification){
                if(validBu(qualification)){
                    this->qualification=qualification;
                     return 1;
                }else{
                     return 0;
                }
            
        }

        int setAreaOfExpertise(string areaOfExpertise){
            if(validBu(areaOfExpertise)){
                this->areaOfExpertise=areaOfExpertise;
                return 1;
            }else{
                return 0;
            }
        }
        
        void setAssignedProject(string assignedProject){
    
                this->assignedProject.push_back(assignedProject);
       
        }
        //***********


        void display(){
            //cout<<"\nEMPLOYEE ID: "<<this->EmpId++<<endl;
            cout<<" FIRST NAME: "<<this->firstName;
            cout<<" LAST NAME: "<<this->lastName;
            cout<<" PHONE 1: "<<this->phone1;
            cout<<" PHONE 2: "<<this->phone2;
            cout<<" BUSINESS UNIT:"<<this->bU;
            cout<<" PRACTICE: "<<this->practice;
            cout<<" QUALIFICATION: "<<this->qualification;
            cout<<" AREA OF INTREST: "<<this->areaOfExpertise;
            cout<<" size"<<this->assignedProject.size();
            for(int i=0;i<this->assignedProject.size();i++)
            cout<<" ASSIGNED PROJECT: "<<this->assignedProject[i];
            cout<<endl;
        }
        
    
};

// Employee addEmp(){
//             int n;
//             string firstName;
//             string lastName;
//             string phone1;
//             string phone2;
//             string bU;
//             string practice;
//             string qualification;
//             string areaOfExpertise;

//             cout<<"\nENTER THE FIRST NAME: "<<endl;
//             getline(cin,firstName);
//             cout<<"\nENTER THE LAST NAME: "<<endl;
//             getline(cin,lastName);
//             cout<<"\nENTER THE PHONE1: "<<endl;
//             getline(cin,phone1);
//             cout<<"\nENTER THE PHONE2: "<<endl;
//             getline(cin,phone2);
//             cout<<"\nENTER THE BUSINESS UNIT: "<<endl;
//             getline(cin,bU);
//             cout<<"\nENTER THE PRACTICE: "<<endl;
//             getline(cin,practice);
//             cout<<"\nENTER THE QUALIFICATION: "<<endl;
//             getline(cin,qualification);
//             cout<<"\nENTER THE AREA OF INTREST: "<<endl;
//             getline(cin,areaOfExpertise);
//             Employee temp(firstName,lastName,phone1,phone2,bU,practice,qualification,areaOfExpertise);
//             //temp();
//             return temp;
// }


// int Employee::EmpId=1000;