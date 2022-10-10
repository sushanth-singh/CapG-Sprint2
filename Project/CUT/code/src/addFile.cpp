#include "../header/header.h"

/********************************************
 * *FUNCTION NAME : addEmp() 
 *
 * *DESCRIPTION   : This function lets the user add employee details and store it in a file. It saves the details in a file with a space separator.
 *
 * *RETURNS       : No Returns 
 *
 *
 *+
*********************************************/
void addEmp()
{
    int no1;
    fstream fin1;
    static int empId;
    fin1.open(STATEMPLOYEE,ios::in);

    fin1>>empId;
    fin1.close();
    
    string firstName;
    string lastName;
    string phone1;
    string phone2;
    string bU;
    string practice;
    string qualification;
    string areaOfIntrest;  

    cout<<"\nENTER THE NUMBER OF EMPLOYEES YOU WANT TO ADD: ";
    cin>>no1;
    getchar();

    for(int i=0;i<no1;i++)
    {                 
        do
        {
            cout<<"ENTER THE NAME: ";            
            getline(cin,firstName);

            try
            {
                if(validNames(firstName))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID FIRST NAME "<<endl;
                cout<<"ENTER VALID FIRST NAME AGAIN WHICH CONAINS ONLY ONE WORD"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE LAST NAME: ";            
            getline(cin,lastName);

            try
            {
                if(validNames(lastName))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID LAST NAME "<<endl;
                cout<<"ENTER VALID LAST NAME AGAIN WHICH CONAINS ONLY ONE WORD"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE PHONE NUBER 1: ";
            getline(cin,phone1);

            try
            {
                if(validNumber(phone1))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID NUMBER "<<endl;
                cout<<"ENTER VALID NUMBER AGAIN WHICH CONAINS 10 DIGITS"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE PHONE NUBER 2: ";            
            getline(cin,phone2);
            
            try
            {
                if(validNumber(phone2))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID NUMBER "<<endl;
                cout<<"ENTER VALID NUMBER AGAIN WHICH CONAINS 10 DIGITS"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        
        do
        {
            cout<<"ENTER THE BUSINESS UNIT: ";
            getline(cin,bU);
            
            try
            {
                if(validCharDigits(bU))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID BUSINESS UNIT "<<endl;
                cout<<"ENTER VALID BUSINESS UNIT AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE PRACTICE: ";            
            getline(cin,practice);

            try
            {
                if(validCharDigits(practice))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID PRACTICE "<<endl;
                cout<<"ENTER VALID PRACTICE AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE QUALIFICATION: ";            
            getline(cin,qualification);
            
            try
            {
                if(validCharDigits(qualification))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID QUALIFICATION "<<endl;
                cout<<"ENTER VALID STRING AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
        

        do
        {
            cout<<"ENTER THE AREA OF EXPERTISE: ";            
            getline(cin,areaOfIntrest);
            try
            {
                if(validCharDigits(areaOfIntrest))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID AREA OF Expertise "<<endl;
                cout<<"ENTER VALID STRING AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);

        fstream f;
        ofstream fout;
        ifstream fin;

        fin.open(EMPPATH);
        fout.open (EMPPATH,ios::app);

        if(fin.is_open())
            fout<<++empId<<"|"<<firstName<<"|"<<lastName<<"|"<<phone1<<"|"<<phone2<<"|"<<bU<<"|"<<practice<<"|"<<qualification<<"|"<<areaOfIntrest<<"|0|0|0|"<<endl;
        
        fin.close();
        fout.close();
        
        if(i==no1-1)
        {
            fin1.open(STATEMPLOYEE,ios::out);
            fin1<<empId;
            fin1.close();
        }
        cout<<"-----------------------------------------------"<<endl;
        cout<<"\nEMPLOYEE IS SUCCESSFULLY ADDED TO THE FILE!!"<<endl;
        cout<<"-----------------------------------------------"<<endl;
    }
}

/********************************************
 * *FUNCTION NAME : addProject() 
 *
 * *DESCRIPTION   : This function lets the user add details regareding to the project and stores it in a file. It saves the details in a file with a space separator.
 *
 * *RETURNS       : No Returns 
 *
 *
 *+
*********************************************/
void addProject()
{
    int no2; 
    fstream fin2;
    static int prjId;
    fin2.open(STATPROJECT,ios::in);
    fin2>>prjId;
    fin2.close();

    string type;
    string desc;
    string clientName;
    string stDate;
    string edDate;
    string profCenter;
    string priority;
    int noOfEmp;
    int noOfAllocated=0;


    cout<<"\nENTER THE NUMBER OF PROJECTS YOU WANT TO ADD: ";
    cin>>no2;
    getchar();

    for(int i=0;i<no2;i++)
    {             
        do
        {
            cout<<"ENTER THE PROJECT TYPE: ";
            getline(cin,type);
            try{
                if(validCharDigits(type)){
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID TYPE "<<endl;
                cout<<"ENTER VALID TYPE IN STRING FORMAT AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);                 
        

        do
        {
            cout<<"ENTER THE JOB DESCRIPTION: ";            
            getline(cin,desc);

            try
            {
                if(validCharDigits(desc))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID DESCRIPTION "<<endl;
                cout<<"ENTER VALID DESCRIPTION IN STRING FORMAT AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);                    
        

        do
        {
            cout<<"ENTER THE CLIENT NAME: ";            
            getline(cin,clientName);
            try
            {
                if(validCharDigits(clientName))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID CLIENT NAME "<<endl;
                cout<<"ENTER VALID CLIENT NAME IN STRING FORMAT AGAIN"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);                  
        

        do
        {
            cout<<"ENTER THE START DATE IN DD/MM/YYYY FORMAT: ";            
            getline(cin,stDate);

            try
            {
                if(validDate(stDate))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID START DATE "<<endl;
                cout<<"ENTER VALID START DATE AGAIN IN DD/MM/YYYY FORMAT"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);                      
        

        do
        {
            cout<<"ENTER THE END DATE IN DD/MM/YYYY FORMAT: ";            
            getline(cin,edDate);
            try
            {
                if(validDate(edDate))
                {
                    if(date_cmp(edDate)==1)
                        break;                                
                }
                throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID END DATE "<<endl;
                cout<<"ENTER VALID END DATE AGAIN IN DD/MM/YYYY FORMAT"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);

        cout<<"ENTER THE PROFIT CENTER: ";
        getline(cin,profCenter);                    
        
        do
        {
            cout<<"ENTER THE PRIORITY: ";            
            getline(cin,priority);

            try
            {
                if(validPriority(priority))
                {
                    break;
                }
                else
                    throw(1);
            }
            catch(int a)
            {
                cout<<"*****************************************************"<<endl;
                cout<<"INVALID PRIORITY "<<endl;
                cout<<"ENTER VALID PRIORITY AGAIN AND PRIORITY IS BETWEEN 1 AND 3"<<endl;
                cout<<"*****************************************************"<<endl;
            }
        }while(1);
            
        
        cout<<"ENTER THE NUMBER OF EMPLOYEES REQUIRED: ";
        cin>>noOfEmp;
        getchar();
            
            

        if(type=="telecom" || type=="Telecom" || type=="TELECOM")
        {
            string internetProvider;
            string  satelliteLinks;
            string  telecomStandards;

            do
            {
                cout<<"ENTER THE INTERNET PROVIDER: ";      
                getline(cin,internetProvider);
                try
                {
                    if(validCharDigits(internetProvider))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID INTERNET PROVIDER "<<endl;
                    cout<<"ENTER VALID INTERNET PROVIDER IN STRING FORMAT AGAIN"<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);
            
            do
            {
                cout<<"ENTER THE SATELLITE LINKS: ";        
                getline(cin,satelliteLinks);
                try
                {
                    if(validCharDigits(satelliteLinks))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID SATELLITE LINKS "<<endl;
                    cout<<"ENTER VALID SATELLITE LINKS IN STRING FORMAT AGAIN"<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);
            
            do
            {
                cout<<"ENTER THE TELECOM STANDARDS: "; 
                getline(cin,telecomStandards);
                try
                {
                    if(validCharDigits(telecomStandards))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID TELECOM STANDARDS "<<endl;
                    cout<<"ENTER VALID TELECOM STANDARDS IN STRING FORMAT AGAIN"<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);

            fstream f;
            ofstream fout;
            ifstream fin;

            fin.open(PRJPATH);
            fout.open (PRJPATH,ios::app);

            if(fin.is_open())
            {   
                if(prjId>=0 && prjId<=9 )
                fout<<"P00";
                if(prjId>=10 && prjId<=99 )
                fout<<"P0";
                if(prjId>=100 && prjId<=999 )
                fout<<"P";
                fout<<++prjId<<"|"<<type<<"|"<<desc<<"|"<<clientName<<"|"<<stDate<<"|"<<edDate<<"|"<<profCenter<<"|"<<priority<<"|"<<noOfEmp<<"|"<<noOfAllocated<<
                "|"<<internetProvider<<"|"<<satelliteLinks<<"|"<<telecomStandards<<endl;
            }

            fin.close();
            fout.close();

            if(i==no2-1)
            { 
                fin2.open(STATPROJECT,ios::out);
                fin2<<prjId;
                fin2.close();
                
            }
             cout<<"\n------------------------------------------------------"<<endl;
            cout<<"PROJECT IS ADDED SUCCESSFULLY IN THE FILE!!"<<endl;
            cout<<"------------------------------------------------------"<<endl;
                    
        }else if(type=="banking" || type=="Banking" || type=="BANKING")
        {
            string currentAccountModulePurchased;
            string loanAccountModulePurchased;
            string  customizations;
        
            do
            {
                cout<<"ENTER THE CURRENT ACCOUNT MODULE PURCHASED: ";            
                getline(cin,currentAccountModulePurchased);
                try
                {
                    if(validCharDigits(currentAccountModulePurchased))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID CURRENT ACCOUNT MODULE PURCHASED "<<endl;
                    cout<<"ENTER VALID CURRENT ACCOUNT MODULE PURCHASED AGAIN"<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);


            do
            {
                cout<<"ENTER THE LOAN ACCOUNT MODULE PURCHASED: ";            
                getline(cin,loanAccountModulePurchased);

                try
                {
                    if(validCharDigits(loanAccountModulePurchased))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID LOAN ACCOUNT MODULE PURCHASED "<<endl;
                    cout<<"ENTER VALID LOAN ACCOUNT MODULE PURCHASED IN STRING FORMAT AGAIN "<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);


            do
            {
                cout<<"ENTER THE CUSTOMIZATIONS : ";            
                getline(cin,customizations);
                try
                {
                    if(validCharDigits(customizations))
                    {
                        break;
                    }
                    else
                        throw(1);
                }
                catch(int a)
                {
                    cout<<"*****************************************************"<<endl;
                    cout<<"INVALID CUSTOMIZATIONS "<<endl;
                    cout<<"ENTER VALID CUSTOMIZATIONS IN STRING FORMAT AGAIN"<<endl;
                    cout<<"*****************************************************"<<endl;
                }
            }while(1);


            fstream f;
            ofstream fout;
            ifstream fin;

            fin.open(PRJPATH);
            fout.open (PRJPATH,ios::app);

            if(fin.is_open())
            {   
                if(prjId>=0 && prjId<=9 )
                fout<<"P00";
                if(prjId>=10 && prjId<=99 )
                fout<<"P0";
                if(prjId>=100 && prjId<=999 )
                fout<<"P";
                fout<<++prjId<<"|"<<type<<"|"<<desc<<"|"<<clientName<<"|"<<stDate<<"|"<<edDate<<"|"<<profCenter<<"|"<<priority<<"|"<<noOfEmp<<"|"<<noOfAllocated<<
                "|"<<currentAccountModulePurchased<<"|"<<loanAccountModulePurchased<<"|"<<customizations<<endl;
            }

            fin.close();
            fout.close();

            if(i==no2-1)
            { 
                fin2.open(STATPROJECT,ios::out);
                fin2<<prjId;
                fin2.close();
                //cout<<"Static ouuuuutttt="<<prjId<<endl;
            }

             cout<<"\n------------------------------------------------------"<<endl;
            cout<<"PROJECT IS ADDED SUCCESSFULLY IN THE FILE!!"<<endl;
            cout<<"------------------------------------------------------"<<endl;
        }else
        {
            fstream f;
            ofstream fout;
            ifstream fin;

            fin.open(PRJPATH);
            fout.open (PRJPATH,ios::app);

            if(fin.is_open())
            {   
                if(prjId>=0 && prjId<=9 )
                fout<<"P00";
                if(prjId>=10 && prjId<=99 )
                fout<<"P0";
                if(prjId>=100 && prjId<=999 )
                fout<<"P";
                fout<<++prjId<<"|"<<type<<"|"<<desc<<"|"<<clientName<<"|"<<stDate<<"|"<<edDate<<"|"<<profCenter<<"|"<<priority<<"|"<<noOfEmp<<"|"<<noOfAllocated<<endl;
            }

            fin.close();
            fout.close();

            if(i==no2-1)
            { 
                fin2.open(STATPROJECT,ios::out);
                fin2<<prjId;
                fin2.close();
                //cout<<"Static ouuuuutttt="<<prjId<<endl;
            }
            cout<<"\n------------------------------------------------------"<<endl;
            cout<<"PROJECT IS ADDED SUCCESSFULLY IN THE FILE!!"<<endl;
            cout<<"------------------------------------------------------"<<endl;
        }  

    }
}
