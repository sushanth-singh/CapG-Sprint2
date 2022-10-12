#include <../header/header.h>


/********************************************
 * *FUNCTION NAME : updateEmp() 
 *
 * *DESCRIPTION   : This function lets the user update the details of an existing employee.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void updateEmp(map<string,Employee> &E)
{
 
    cout<<"ENTER EMPLOYEE ID: ";
    
    string eId;
    cin>>eId;
    int flag=0;
    map<string,Employee>::iterator itr;
    itr = E.find(eId);
      
    if(itr == E.end()){
        cout<<"*****************************************************"<<endl;
        cout << "EMPLOYEE IS NOT PRESENT"<<endl ;
        cout<<"*****************************************************"<<endl;
    }
    else
    {              
        int ch1;    
        do
        {  
            cout<<"....................UPDATE EMPLOYEE MENU...................."<<endl;
            cout<<"\n 1. UPDATE FIRST NAME: "<<itr->second.getFirstName()<<endl;
            cout<<" 2. UPDATE LAST NAME: "<<itr->second.getLastName()<<endl;
            cout<<" 3. UPDATE PHONE NUMBER 1: "<<itr->second.getPhone1()<<endl;
            cout<<" 4. UPDATE PHONE NUMBER 2: "<<itr->second.getPhone2()<<endl;
            cout<<" 5. UPDATE BUSINESS UNIT: "<<itr->second.getBu()<<endl;
            cout<<" 6. UPDATE PRACTICE: "<<itr->second.getPractice()<<endl;
            cout<<" 7. UPDATE QUALIFICATION: "<<itr->second.getQualification()<<endl;
            cout<<" 8. UPDATE AREA OF EXPERTISE: "<<itr->second.getAreaOfExpertise()<<endl;
            cout<<" 9. EXIT TO MAIN MENU"<<endl;
            cout<<"..................................................."<<endl;
            cout<<" ENTER THE CHOICE: "<<endl;
            cin>>ch1;
            cout<<"..................................................."<<endl;
            switch(ch1)
            {
                case 1:
                {
                    do
                    {
                        string firstName;
                        cout<<"ENTER THE FIRST NAME: ";
                        getchar();
                        getline(cin,firstName);
                        try{
                            if(validNames(firstName)){
                                itr->second.setFirstName(firstName);
                                cout<<"EMPLOYEE FIRST NAME IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID FIRST NAME "<<endl;
                            cout<<"ENTER VALID FIRST NAME AGAIN IN ONE WORD"<<endl;
                        }
                    }while(1);
                }
                break;
                  
                case 2:
                {
                    do
                    {
                        string lastName;
                        cout<<"ENTER THE LASTNAME :";
                        getchar();
                        getline(cin,lastName);
                        try{
                            if(validNames(lastName)){
                                itr->second.setLastName(lastName);
                                cout<<"EMPLOYEE LAST NAME IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID LAST NAME "<<endl;
                            cout<<"ENTER VALID LAST NAME AGAIN IN ONE WORD"<<endl;
                        }
                    }while(1);

                }
                break;
            
                case 3:
                {
                    do
                    {
                        string ph1;
                        cout<<"ENTER THE PHONE NUMBER 1:";
                        getchar();
                        getline(cin,ph1);
                        try{
                            if(validNumber(ph1)){
                                itr->second.setPhone1(ph1);
                                cout<<"EMPLOYEE PHONE NUMBER 1 IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID PHONE NUMBER "<<endl;
                            cout<<"ENTER VALID PHONE NUMBER AGAIN WHICH CONTAINS 10 DIGITS"<<endl;
                        }
                    }while(1);
                    
                }
                break;
                
                case 4:
                {
                    do
                    {
                        string ph2;
                        cout<<"ENTER THE PHONE NUMBER 2: ";
                        getchar();
                        getline(cin,ph2);
                        try{
                            if(validNumber(ph2)){
                                itr->second.setPhone2(ph2);
                                cout<<"EMPLOYEE PHONE NUMBER 2 IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID PHONE NUMBER 2 "<<endl;
                            cout<<"ENTER VALID PHONE NUMBER 2 AGAIN WHICH CONTAINS 10 DIGITS"<<endl;
                        }
                    }while(1);

                }
                break;
                case 5:
                {
                    do
                    {
                        string bu;
                        cout<<"ENTER THE BUSINESS UNIT: ";
                        getchar();
                        getline(cin,bu);
                        try{
                            if(validCharDigits(bu)){
                                itr->second.setBu(bu);
                                cout<<"EMPLOYEE BUSINESS UNIT IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID BUSINESS UNIT "<<endl;
                            cout<<"ENTER VALID BUSINESS UNIT AGAIN"<<endl;
                        }
                    }while(1);
                }
                break;

                case 6:
                {
                    do
                    {
                        string practice;
                        cout<<"ENTER THE PRACTICE :";
                        getchar();
                        getline(cin,practice);
                        try{
                            if(validCharDigits(practice)){
                                itr->second.setPractice(practice);
                                cout<<"EMPLOYEE PRACTICE IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID PRACTICE "<<endl;
                            cout<<"ENTER VALID PRACTICE AGAIN"<<endl;
                        }
                    }while(1);
                }
                break;

                case 7:
                {
                    do
                    {
                        string qualification;
                        cout<<"ENTER THE QUALIFICATION :";
                        getchar();
                        getline(cin,qualification);
                        try{
                            if(validCharDigits(qualification)){
                                itr->second.setQualification(qualification);
                                cout<<"EMPLOYEE QUALIFICATION IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID QUALIFICATION "<<endl;
                            cout<<"ENTER VALID QUALIFICATION AGAIN"<<endl;
                        }
                    }while(1);
                }
                break;

                case 8:
                {
                    do
                    {
                        string areaOfIntrest;
                        cout<<"ENTER THE AREA OF EXPERTISE :";
                        getchar();
                        getline(cin,areaOfIntrest);
                        try{
                            if(validCharDigits(areaOfIntrest)){
                                itr->second.setAreaOfExpertise(areaOfIntrest);
                                cout<<"EMPLOYEE AREA OF EXPERTISE IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                        }
                        catch(int a){
                            cout<<"INVALID AREA OF EXPERTISE "<<endl;
                            cout<<"ENTER VALID AREA OF EXPERTISE AGAIN"<<endl;
                        }
                    }while(1);
                }
                break;
           
            }
        }while(ch1<9);
    }
     saveEmployee(E);
}


/********************************************
 * *FUNCTION NAME : updateProject() 
 *
 * *DESCRIPTION   : This function lets the user update the details of an existing project.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void updateProject(map<string,Project *> &P)
{
    cout<<"ENTER PROJECT  ID:";
    string pId;
    cin>>pId;
    int ch1;
 
    map<string,Project *>::iterator itr;
    itr = P.find(pId);
      
    if(itr == P.end())
        cout << "PROJECT IS NOT PRESENT"<<endl;
    else
    {              
        if(itr->second->getType()=="telecom")
        {
            telecom *tpr=(telecom *)itr->second;
            do
            {               
                cout<<"....................UPDATE PROJECT MENU...................."<<endl;
                cout<<"\n 1. ADD DESCRIPTION"<<endl;
                cout<<" 2. ADD CLIENT NAME"<<endl;
                cout<<" 3. ADD START DATE"<<endl;
                cout<<" 4. ADD END DATE"<<endl;
                cout<<" 5. ADD PROFIT CENTER"<<endl;
                cout<<" 6. ADD PRIORITY "<<endl;
                cout<<" 7. ADD NUMBER OF EMPLOYEE REQUIRED"<<endl;
                cout<<" 8. ADD INTERNET PROVIDER"<<endl;
                cout<<" 9. ADD SATELLITE LINKS"<<endl;
                cout<<" 10. ADD TELECOM STANDARDS"<<endl;
                cout<<" 11. EXIT TO MAIN MENU"<<endl;
                cout<<"..................................................."<<endl;
                cout<<"ENTER THE CHOICE:";
                cin>>ch1;
                cout<<"..................................................."<<endl;

                switch(ch1)
                {
                    case 1:
                    {
                        do
                        {
                            string description;
                            cout<<"ENTER THE DESCRIPTION :";
                            getchar();
                            getline(cin,description);
                            try
                            {
                                if(validCharDigits(description)){
                                    tpr->setdesc(description);
                                    cout<<"PROJECT DESCRIPTION IS SUCCESSFULLY UPDATED"<<endl;
                                break;
                            }
                            else
                                throw(EXCEPTION);
                            }
                            catch(int a)
                            {
                                cout<<"INVALID DESCRIPTION "<<endl;
                                cout<<"ENTER VALID DESCRIPTION AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;
                        
                    case 2:
                    {
                        do
                        {
                            string clientName;
                            cout<<"ENTER THE CLIENT NAME :";
                            getchar();
                            getline(cin,clientName);
                            try
                            {
                                if(validCharDigits(clientName))
                                {
                                    tpr->setclientName(clientName);
                                    cout<<"PROJECT CLIENT NAME IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a)
                            {
                                cout<<"INVALID CLIENT NAME "<<endl;
                                cout<<"ENTER VALID CLIENT NAME AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;

                    case 3:
                    {
                        do
                        {
                            string st;
                            cout<<"ENTER THE START DATE :";
                            getchar();
                            getline(cin,st);
                            try
                            {
                                if(validDate(st))
                                {
                                    tpr->setstDate(st);
                                    cout<<"PROJECT START DATE IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a)
                            {
                                cout<<"INVALID START DATE "<<endl;
                                cout<<"ENTER VALID START DATE AGAIN AGAIN IN DD/MM/YYYY FROMAT"<<endl;
                            }
                        }while(1);
                    }
                    break;
                    
                    case 4:
                    {
                        do
                        {
                            string ed;
                            cout<<"ENTER THE END DATE :";
                            getchar();
                            getline(cin,ed);
                            try{
                                if(validDate(ed) && stDate_edDate(tpr->getstDate(),ed)==1){
                                    tpr->setedDate(ed);
                                    cout<<"PROJECT END DATE IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID END DATE "<<endl;
                                cout<<"ENTER VALID END DATE AGAIN IN DD/MM/YYYY FROMAT AND IT MUST BE GREATER THAN START DATE"<<endl;
                            }
                        }while(1);
                
                        
                    }
                    break;
                    case 5:
                    {
                        string profit_center;
                        cout<<"ENTER PROFIT CENTER:";
                        getchar();
                        getline(cin,profit_center);  
                        tpr->setprofCenter(profit_center);
                        cout<<"PROJECT PROFIT CENTER IS SUCCESSFULLY UPDATED"<<endl;
                    }
                    break;
                    case 6:
                    {
                        do
                        {
                            string priority;
                            cout<<"ENTER THE PRIORITY:";
                            getchar();
                            getline(cin,priority);
                            try{
                                if(validPriority(priority)){
                                    tpr->setPriority(priority);
                                    cout<<"PROJECT PRIORITY IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID PRIORITY "<<endl;
                                cout<<"ENTER VALID PRIORITY AGAIN"<<endl;
                            }
                        }while(1);
                
                        
                    }
                    break;

                    case 7:
                    {
                        int noOfEmp;
                        cout<<"ENTER THE NUMBER OF EMPLOYEE REQUIRED:";
                        getchar();
                        cin>>noOfEmp;  
                        tpr->setNoOfEmp(noOfEmp);
                        cout<<"PROJECT NUMBER OF EMPLOYEE REQUIRED IS SUCCESSFULLY UPDATED"<<endl;
                    
                    }
                    break;
                    
                    
                    case 8:
                    {
                        do
                        {
                            string internetProvider;
                            cout<<"ENTER THE INTERNET PROVIDER:";
                            getchar();
                            getline(cin,internetProvider);
                            try{
                                if(validCharDigits(internetProvider)){
                                    tpr->setInternetProvider(internetProvider);
                                    cout<<"PROJECT INTERNET PROVIDER IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID INTERNET PROVIDER "<<endl;
                                cout<<"ENTER VALID INTERNET PROVIDER AGAIN"<<endl;
                            }
                        }while(1);
                
                    
                    }
                    break;
                    
                    case 9:
                    {
                        do
                        {
                            string satelliteLinks;
                            cout<<"ENTER THE SATELLITE :";
                            getchar();
                            getline(cin,satelliteLinks);
                            try{
                                if(validCharDigits(satelliteLinks)){
                                    tpr->setSatelliteLinks(satelliteLinks);
                                    cout<<"PROJECT SATELLITE IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID SATELLITE "<<endl;
                                cout<<"ENTER VALID SATELLITE AGAIN"<<endl;
                            }
                        }while(1);
            
                    
                    }
                    break;

                    
                    case 10:
                    {
                        do
                        {
                            string telecomStandards;
                            cout<<"ENTER THE TELECOM STANDARD:";
                            getchar();
                            getline(cin,telecomStandards);
                            try{
                                if(validCharDigits(telecomStandards)){
                                    tpr->setTelecomStandards(telecomStandards);
                                    cout<<"PROJECT TELECOM STANDARD IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID TELECOM STANDARD "<<endl;
                                cout<<"ENTER VALID TELECOM STANDARD AGAIN"<<endl;
                            }
                        }while(1);
                
                    
                    }
                    break;
                }
            }while(ch1!=11);
        }
        else if(itr->second->getType()=="banking")
        {
            banking *bpr=(banking *)itr->second;
            do
            {
                cout<<"....................UPDATE PROJECT MENU...................."<<endl;
                cout<<"\n#1 ADD DESCRIPTION"<<endl;
                cout<<"#2 ADD CLIENT NAME"<<endl;
                cout<<"#3 ADD START DATE"<<endl;
                cout<<"#4 ADD END DATE"<<endl;
                cout<<"#5 ADD PROFIT CENTER"<<endl;
                cout<<"#6 ADD PRIORITY "<<endl;
                cout<<"#7 ADD NUMBER OF EMPLOYEE REQUIRED"<<endl;
                cout<<"#8 ADD CURRENT ACCOUNT MODULE PURCHASED"<<endl;
                cout<<"#9 ADD LOAN ACCOUNT MODULE PUCHASED"<<endl;
                cout<<"#10 ADD CUSTOMISATION"<<endl;
                cout<<"#11 EXIT TO MAIN MENU"<<endl;
                cout<<"..................................................."<<endl;
                cout<<"ENTER THE CHOICE: "<<endl;
                cin>>ch1;
                cout<<"..................................................."<<endl;

                switch(ch1)
                {
                    case 1:
                    {
                        do
                        {
                            string description;
                            cout<<"ENTER THE DESCRIPTION :";
                            getchar();
                            getline(cin,description);
                            try
                            {
                                if(validCharDigits(description))
                                {
                                    bpr->setdesc(description);
                                    cout<<"PROJECT DESCRIPTION IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a)
                            {
                                cout<<"INVALID STRING "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;
                            
                    case 2:
                    {
                        do
                        {
                            string clientName;
                            cout<<"ENTER THE CLIENT NAME :";
                            getchar();
                            getline(cin,clientName);
                            try{
                                if(validCharDigits(clientName)){
                                    bpr->setclientName(clientName);
                                    cout<<"PROJECT CLIENT NAME IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID CLIENT NAME "<<endl;
                                cout<<"ENTER VALID CLIENT NAME AGAIN"<<endl;
                            }
                        }while(1);

                        
                    }
                    break;
                    
                    case 3:
                    {
                        do
                        {
                            string st;
                            cout<<"ENTER THE START DATE :";
                            getchar();
                            getline(cin,st);
                            try{
                                if(validDate(st)){
                                    bpr->setstDate(st);
                                    cout<<"PROJECT START DATE IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID STRING "<<endl;
                                cout<<"ENTER VALID STRING AGAIN"<<endl;
                            }
                        }while(1);

                        
                    }
                    break;
                    
                    case 4:
                    {
                        do
                        {
                            string ed;
                            cout<<"ENTER THE END DATE :";
                            getchar();
                            getline(cin,ed);
                            try{
                                if(validDate(ed) && stDate_edDate(bpr->getstDate(),ed)==1){
                                    bpr->setedDate(ed);
                                    cout<<"PROJECT END DATE IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID END DATE "<<endl;
                                cout<<"ENTER VALID END DATE AGAIN IN DD/MM/YYYY FROMAT AND IT MUST BE GREATER THAN START DATE"<<endl;
                            }
                        }while(1);
                        
                    }
                    break;
                    
                    case 5:
                    {
                        string profit_center;
                        cout<<"ENTER PROFIT CENTER :";
                        getchar();
                        getline(cin,profit_center);  
                        bpr->setprofCenter(profit_center);
                        cout<<"PROJECT PROFIT CENTER IS SUCCESSFULLY UPDATED"<<endl;
                    }
                    break;
                    
                    case 6:
                    {
                        do
                        {
                            string priority;
                            cout<<"ENTER THE PRIORITY :";
                            getchar();
                            getline(cin,priority);
                            try{
                                if(validPriority(priority)){
                                    bpr->setPriority(priority);
                                    cout<<"PROJECT PRIORITY IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID PRIORITY "<<endl;
                                cout<<"ENTER VALID PRIORITY AGAIN"<<endl;
                            }
                        }while(1);
                        
                    }
                    break;

                    case 7:
                    {
                        int noOfEmp;
                        cout<<"ENTER THE NUMBER OF EMPLOYEE REQUIRED: ";
                        getchar();
                        cin>>noOfEmp;  
                        bpr->setNoOfEmp(noOfEmp);
                        cout<<"PROJECT NUMBER OF EMPLOYEE REQUIRED IS SUCCESSFULLY UPDATED"<<endl;
                    }
                    break;
                    
                    
                    case 8:
                    {
                        do
                        {
                            string currentAccountModulePurchased;
                            cout<<"ENTER THE CURRENT ACCOUNT MODULE PURCHASED: ";
                            getchar();
                            getline(cin,currentAccountModulePurchased);
                            try{
                                if(validCharDigits(currentAccountModulePurchased)){
                                    bpr->setCurrentAccountModulePurchased(currentAccountModulePurchased);
                                    cout<<"PROJECT CURRENT ACCOUNT MODULE PURCHASED IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID CURRENT ACCOUNT MODULE PURCHASED "<<endl;
                                cout<<"ENTER VALID CURRENT ACCOUNT MODULE PURCHASED AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;

                    case 9:
                    {
                        do
                        {
                            string loanAccountModulePurchased;
                            cout<<"ENTER THE LOAN ACCOUNT MODULE PURCHASED: ";
                            getchar();
                            getline(cin,loanAccountModulePurchased);
                            try{
                                if(validCharDigits(loanAccountModulePurchased)){
                                    bpr->setLoanAccountModulePurchased(loanAccountModulePurchased);
                                    cout<<"PROJECT LOAN ACCOUNT MODULE PURCHASED IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID LOAN ACCOUNT MODULE PURCHASED "<<endl;
                                cout<<"ENTER VALID LOAN ACCOUNT MODULE PURCHASED AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;


                    case 10:
                    {
                        do
                        {
                            string customizations;
                            cout<<"ENTER THE CUSTOMIZATION :";
                            getchar();
                            getline(cin,customizations);
                            try{
                                if(validCharDigits(customizations)){
                                    bpr->setCustomizations(customizations);
                                    cout<<"PROJECT CUSTOMIZATION IS SUCCESSFULLY UPDATED"<<endl;
                                    break;
                                }
                                else
                                    throw(EXCEPTION);
                            }
                            catch(int a){
                                cout<<"INVALID CUSTOMIZATION "<<endl;
                                cout<<"ENTER VALID CUSTOMIZATION AGAIN"<<endl;
                            }
                        }while(1);
                    }
                    break;   
                }
            }while(ch1!=11);

        }
        else{

               do{
                    cout<<"....................UPDATE PROJECT MENU...................."<<endl;
                    cout<<"\n#1 ADD DESCRIPTION"<<endl;
                    cout<<"#2 ADD CLIENT NAME"<<endl;
                    cout<<"#3 ADD START DATE"<<endl;
                    cout<<"#4 ADD END DATE"<<endl;
                    cout<<"#5 ADD PROFIT CENTER"<<endl;
                    cout<<"#6 ADD PRIORITY "<<endl;
                    cout<<"#7 ADD NUMBER OF EMPLOYEE REQUIRED"<<endl;
                    cout<<"#8 EXIT TO MAIN MENU"<<endl;
                    cout<<"..................................................."<<endl;
                    cout<<"ENTER THE CHOICE: "<<endl;
                    cin>>ch1;
                    cout<<"..................................................."<<endl;

                    switch(ch1)
                    {
                        case 1:
                        {   
                            do
                            {
                                string description;
                                cout<<"ENTER THE DESCRIPTION :";
                                getchar();
                                getline(cin,description);
                                try{
                                    if(validCharDigits(description)){
                                        itr->second->setdesc(description);
                                        cout<<"PROJECT DESCRIPTION IS SUCCESSFULLY UPDATED"<<endl;
                                        break;
                                    }
                                    else
                                        throw(EXCEPTION);
                                }
                                catch(int a){
                                    cout<<"INVALID DESCRIPTION "<<endl;
                                    cout<<"ENTER VALID DESCRIPTION AGAIN"<<endl;
                                }
                            }while(1);
    
                        }
                        break;
                            
                        case 2:
                        {
                            do
                            {
                                string clientName;
                                cout<<"ENTER THE CLIENT NAME :";
                                getchar();
                                getline(cin,clientName);
                                try{
                                    if(validCharDigits(clientName)){
                                        itr->second->setclientName(clientName);
                                        cout<<"PROJECT CLIENT NAME IS SUCCESSFULLY UPDATED"<<endl;
                                        break;
                                    }
                                    else
                                        throw(EXCEPTION);
                                }
                                catch(int a){
                                    cout<<"INVALID CLIENT NAME "<<endl;
                                    cout<<"ENTER VALID CLIENT NAME AGAIN"<<endl;
                                }
                            }while(1);
                    
                            
                        }
                        break;
                        case 3:
                        {
                            do
                            {
                                string st;
                                cout<<"ENTER THE START DATE :";
                                getchar();
                                getline(cin,st);
                                try{
                                    if(validDate(st)){
                                       itr->second->setstDate(st);
                                       cout<<"PROJECT START DATE IS SUCCESSFULLY UPDATED"<<endl;
                                        break;
                                    }
                                    else
                                        throw(EXCEPTION);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;
                        
                         case 4:
                        {
                            do{
                                string ed;
                                cout<<"\nENTER THE END DATE: ";
                                
                                getline(cin,ed);
                                try{
                                    if(validDate(ed) && stDate_edDate(itr->second->getstDate(),ed)==1){
                                        if(date_cmp(ed)==1)
                                        itr->second->setedDate(ed);
                                       cout<<"PROJECT END DATE IS SUCCESSFULLY UPDATED"<<endl;
                                            break;                                
                                    }
                                    throw(EXCEPTION);
                                }
                                catch(int a){
                                    cout<<"INVALID END DATE "<<endl;
                                    cout<<"ENTER VALID END DATE AGAIN IN DD/MM/YYYY FROMAT AND IT MUST BE GREATER THAN START DATE"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;
                        case 5:
                         {
                            string profit_center;
                            cout<<"ENTER THE PROFIT CENTER:";
                            getchar();
                            getline(cin,profit_center);  
                            itr->second->setprofCenter(profit_center);
                             cout<<"PROJECT PROFIT CENTER IS SUCCESSFULLY UPDATED"<<endl;
                        }
                        break;
                        case 6:
                        {
                            do
                            {
                                string priority;
                                cout<<"ENTER THE PRIORITY :";
                                getchar();
                                getline(cin,priority);
                                try{
                                    if(validPriority(priority)){
                                        itr->second->setPriority(priority);
                                        cout<<"PROJECT PRIORITY IS SUCCESSFULLY UPDATED"<<endl;
                                        break;
                                    }
                                    else
                                        throw(EXCEPTION);
                                }
                                catch(int a){
                                    cout<<"INVALID PRIORITY "<<endl;
                                    cout<<"ENTER VALID PRIORITY AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;

                        case 7:
                        {
                            int noOfEmp;
                            cout<<"ENTER THE NUMBER OF EMPLOYEES REQUIRED:";
                            getchar();
                            cin>>noOfEmp;  
                            itr->second->setNoOfEmp(noOfEmp);
                            cout<<"PROJECT NUMBER OF EMPLOYEES REQUIRED IS SUCCESSFULLY UPDATED"<<endl;
                        }
                        break;
                        
                        
                    }
                }while(ch1!=8);
        }
                    
    }
     saveProject(P);
}