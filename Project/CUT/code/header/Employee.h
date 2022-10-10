#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<stdlib.h>
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
        string ap1;
        string ap2;
        string ap3;
        
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
        
        string getAp1(){
            return this->ap1;
        }

        string getAp2(){
            return this->ap2;
        }

        string getAp3(){
            return this->ap3;
        }


        void setAp1(string ap1){
            this->ap1=ap1;
        }

        void setAp2(string ap2){
            this->ap2=ap2;
        }
        
        void setAp3(string ap3){
            this->ap3=ap3;
        }
        
        void deallocateAssignedProject(string pId){
            if(ap1==pId){
                this->ap1="0";
            }else if(ap2==pId){
                this->ap2="0";
            }else if(ap3==pId){
                this->ap3="0";
            }
        }

        
        int searchAssignedProject(string pId){
            if(ap1==pId){
                return 1;
            }else if(ap2==pId){
                return 1;
            }else if(ap3==pId){
                return 1;
            }
            return 0;
        }

        static int getEmpId(){
            return EmpId;
        }


        //***********

        void setFirstName(string firstName){
            this->firstName=firstName;
        }

        void setLastName(string lastName){
            this->lastName=lastName;
        }
 
        void setPhone1(string phone1){
            this->phone1=phone1;
        }

        void setPhone2(string phone2){
             this->phone2=phone2;
        }
        
        void setBu(string bU){
            this->bU=bU;
        }

        void setPractice(string practice){
            this->practice=practice;
        }

        void setQualification(string qualification){

            this->qualification=qualification;
        }

        void setAreaOfExpertise(string areaOfExpertise){
            this->areaOfExpertise=areaOfExpertise;
        }
        
        void setAssignedProject(string assignedProject){
            if(this->ap1=="0"){
                ap1=assignedProject;
            }else if(this->ap2=="0"){
                ap2=assignedProject;
            }else if(this->ap3=="0"){
                ap3=assignedProject;
            }
        }




        //***********


        void display(){
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
        
    
};
