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
void addEmp(){
int no1;
                fstream fin1;
                static int empId;
                fin1.open("../data/stat.txt",ios::in);
           
                    fin1>>empId;
                    fin1.close();
                    cout<<"Static="<<empId<<endl;
                
                string firstName;
                string lastName;
                string phone1;
                string phone2;
                string bU;
                string practice;
                string qualification;
                string areaOfIntrest;  
                cout<<"\nENTER THE NUMBER OF EMPLOYEE: "<<endl;
                cin>>no1;
                getchar();
                for(int i=0;i<no1;i++){                 
                    // cout<<"\nENTER THE FIRST NAME: "<<endl;
                    // getline(cin,firstName);
                    do{
                        cout<<"Enter the firstName :";
                        
                        getline(cin,firstName);
                        try{
                            if(validNames(firstName)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID FIRST NAME "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE LAST NAME: "<<endl;
                    // getline(cin,lastName);
                    do{
                        cout<<"ENTER THE LAST NAME :";
                        
                        getline(cin,lastName);
                        try{
                            if(validNames(lastName)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID LAST NAME "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE PHONE1: "<<endl;
                    // getline(cin,phone1);
                    do{
                        cout<<"ENTER THE PHONE NUBER 1 :";
                        
                        getline(cin,phone1);
                        try{
                            if(validNumber(phone1)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID NUMBER "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE PHONE2: "<<endl;
                    // getline(cin,phone2);
                    do{
                        cout<<"ENTER THE PHONE NUBER 2 :";
                        
                        getline(cin,phone2);
                        try{
                            if(validNumber(phone2)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID NUMBER "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE BUSINESS UNIT: "<<endl;
                    // getline(cin,bU);
                    do{
                        cout<<"\nENTER THE BUSINESS UNIT: ";
                        
                        getline(cin,bU);
                        try{
                            if(validCharDigits(bU)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID BUSINESS UNIT "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE PRACTICE: "<<endl;
                    // getline(cin,practice);
                    do{
                        cout<<"\nENTER THE PRACTICE: ";
                        
                        getline(cin,practice);
                        try{
                            if(validCharDigits(practice)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID PRACTICE "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE QUALIFICATION: "<<endl;
                    // getline(cin,qualification);
                    do{
                        cout<<"\nENTER THE QUALIFICATION: ";
                        
                        getline(cin,qualification);
                        try{
                            if(validCharDigits(qualification)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID QUALIFICATION "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    // cout<<"\nENTER THE AREA OF INTREST: "<<endl;
                    // getline(cin,areaOfIntrest);
                    do{
                        cout<<"\nENTER THE AREA OF Expertise: ";
                        
                        getline(cin,areaOfIntrest);
                        try{
                            if(validCharDigits(areaOfIntrest)){
                                break;
                            }
                            else
                                throw(1);
                        }
                        catch(int a){
                            cout<<"INVALID AREA OF Expertise "<<endl;
                            cout<<"ENTER VALID STRING AGAIN"<<endl;
                        }
                    }while(1);
                    fstream f;
                    ofstream fout;
                    ifstream fin;
                    fin.open("../data/Employee.txt");
                    fout.open ("../data/Employee.txt",ios::app);
                    if(fin.is_open())
                        fout<<++empId<<"|"<<firstName<<"|"<<lastName<<"|"<<phone1<<"|"<<phone2<<"|"<<bU<<"|"<<practice<<"|"<<qualification<<"|"<<areaOfIntrest<<"|0|0|0|"<<endl;
                    fin.close();
                    fout.close();
                    if(i==no1-1)
                    {
                        fin1.open("../data/stat.txt",ios::out);
                        fin1<<empId;
                        fin1.close();
                         cout<<"Static ouuuuutttt="<<empId<<endl;
                    }
                    cout<<"Employee is successfully added"<<endl;
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
void addProject(){
                int no2; 
                fstream fin2;
                static int prjId;
                fin2.open("../data/stat1.txt",ios::in);
                fin2>>prjId;
                fin2.close();
                // cout<<"Static="<<prjId<<endl;
                int n;
                string type;
                string desc;
                string clientName;
                string stDate;
                string edDate;
                string profCenter;
                string priority;
                int noOfEmp;
                int noOfAllocated=0;


        cout<<"\nENTER THE NUMBER OF PROJECTS: "<<endl;
        cin>>no2;
        getchar();

          for(int i=0;i<no2;i++)
          {             
                        do{
                        cout<<"\nENTER THE PROJECT TYPE: ";
                                
                            getline(cin,type);
                            try{
                                if(validCharDigits(type)){
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID TYPE "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);                 
                        // cout<<"\nENTER THE JOB DESCRIPTION: "<<endl;
                        // getline(cin,desc); 
                        do{
                            cout<<"\nENTER THE JOB DESCRIPTION: ";
                            
                            getline(cin,desc);
                            try{
                                if(validCharDigits(desc)){
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID DESCRIPTION "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);                    
                        // cout<<"\nENTER THE CLIENT NAME: "<<endl;
                        // getline(cin,clientName);  
                        do{
                            cout<<"\nENTER THE CLIENT NAME: ";
                            
                            getline(cin,clientName);
                            try{
                                if(validCharDigits(clientName)){
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID CLIENT NAME "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);                  
                        // cout<<"\nENTER THE START Date: "<<endl;
                        // getline(cin,stDate);
                        do{
                            cout<<"\nENTER THE START DATE: ";
                            
                            getline(cin,stDate);
                            try{
                                if(validDate(stDate)){
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID START DATE "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);                      
                        // cout<<"\nENTER THE END Date: "<<endl;
                        // getline(cin,edDate);
                        do{
                            cout<<"\nENTER THE END DATE: ";
                            
                            getline(cin,edDate);
                            try{
                                if(validDate(edDate)){
                                    if(date_cmp(edDate)==1)
                                        break;                                
                                }
                                throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID END DATE "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);
                        cout<<"\nENTER THE PROFIT CENTER: "<<endl;
                        getline(cin,profCenter);                    
                        // cout<<"\nENTER THE PRIORITY: "<<endl;
                        // //cin>>priority;
                        // getline(cin,priority);   
                        // // getchar();
                        do{
                            cout<<"\nENTER THE PRIORITY: ";
                            
                            getline(cin,priority);
                            try{
                                if(validPriority(priority)){
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
                                cout<<"INVALID PRIORITY "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                                }while(1);
                            
                       cout<<"\nENTER THE NUMBER OF EMPLOYEES REQUIRED: "<<endl;
                            cin>>noOfEmp;
                            getchar();

                    if(type=="telecom"){
                            string internetProvider;
                            string  satelliteLinks;
                            string  telecomStandards;
                
                            do{
                                    cout<<"\nENTER THE Internet Provider: ";
                                    
                                    getline(cin,internetProvider);
                                    try{
                                        if(validCharDigits(internetProvider)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID internetProvider "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);
                            
                                do{
                                    cout<<"\nENTER THE QUALIFICATION: ";
                                    
                                    getline(cin,satelliteLinks);
                                    try{
                                        if(validCharDigits(satelliteLinks)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID satelliteLinks "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);
                            
                                do{
                                    cout<<"\nENTER THE telecomStandards: ";
                                    
                                    getline(cin,telecomStandards);
                                    try{
                                        if(validCharDigits(telecomStandards)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID telecomStandards "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);

                            fstream f;
                            ofstream fout;
                            ifstream fin;
                            fin.open("../data/Project.txt");
                            fout.open ("../data/Project.txt",ios::app);
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
                                fin2.open("../data/stat1.txt",ios::out);
                                fin2<<prjId;
                                fin2.close();
                                cout<<"Static ouuuuutttt="<<prjId<<endl;
                            }
                            cout<<"Project is successfully added"<<endl;
                                   
                    }
                    else if(type=="banking"){
                                string currentAccountModulePurchased;
                                string loanAccountModulePurchased;
                                string  customizations;
                            
                            do{
                                    cout<<"\nENTER THE Current Account Module Purchased: ";
                                    
                                    getline(cin,currentAccountModulePurchased);
                                    try{
                                        if(validCharDigits(currentAccountModulePurchased)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID Current Account Module Purchased "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);


                                do{
                                    cout<<"\nENTER THE Loan Account Module Purchased: ";
                                    
                                    getline(cin,loanAccountModulePurchased);
                                    try{
                                        if(validCharDigits(loanAccountModulePurchased)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID Loan Account Module Purchased "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);


                                do{
                                    cout<<"\nENTER THE customizations: ";
                                    
                                    getline(cin,customizations);
                                    try{
                                        if(validCharDigits(customizations)){
                                            break;
                                        }
                                        else
                                            throw(1);
                                    }
                                    catch(int a){
                                        cout<<"INVALID customizations "<<endl;
                                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                                    }
                                }while(1);


                          fstream f;
                            ofstream fout;
                            ifstream fin;
                            fin.open("../data/Project.txt");
                            fout.open ("../data/Project.txt",ios::app);
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
                                fin2.open("../data/stat1.txt",ios::out);
                                fin2<<prjId;
                                fin2.close();
                                cout<<"Static ouuuuutttt="<<prjId<<endl;
                            }
                            cout<<"Project is successfully added"<<endl;

                    }
                    else{
                            // cout<<"\nENTER THE PROJECT TYPE: "<<endl;

                        
                            fstream f;
                            ofstream fout;
                            ifstream fin;
                            fin.open("../data/Project.txt");
                            fout.open ("../data/Project.txt",ios::app);
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
                                fin2.open("../data/stat1.txt",ios::out);
                                fin2<<prjId;
                                fin2.close();
                                cout<<"Static ouuuuutttt="<<prjId<<endl;
                            }
                            cout<<"Project is successfully added"<<endl;
                        }  
 
}
}
