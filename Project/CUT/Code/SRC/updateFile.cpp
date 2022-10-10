#include "../header/header.h"


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
 
 cout<<"ENTER EMPLOYEE  ID";
 string eId;
 cin>>eId;
 int flag=0;
 map<string,Employee>::iterator itr;
 itr = E.find(eId);
      
    if(itr == E.end())
        cout << "EMPLOYEE IS NOT PRESENT" ;
    else
    {              
        int ch1;
    
    do{
        
        cout<<"\n#1 ADD firstName: "<<endl;
        cout<<"#2 ADD lastName: "<<endl;
        cout<<"#3 Add phone1: "<<endl;
        cout<<"#4 Add phone2: "<<endl;
        cout<<"#5 Add Bu: "<<endl;
        cout<<"#6 Add practice "<<endl;
        cout<<"#7 Add qualification "<<endl;
        cout<<"#8 Add areaOfIntrest"<<endl;
        cout<<"ENTER THE CHOICE: "<<endl;
        cin>>ch1;

       switch(ch1)
        {
           case 1:
            {
                do{
                    string firstName;
                    cout<<"Enter the firstName :";
                    getchar();
                    getline(cin,firstName);
                    try{
                        if(validNames(firstName)){
                            itr->second.setFirstName(firstName);
                            cout<<"Employee first Name is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
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
                    string lastName;
                    cout<<"ENTER THE LASTNAME :";
                    getchar();
                    getline(cin,lastName);
                    try{
                        if(validNames(lastName)){
                            itr->second.setLastName(lastName);
                            cout<<"Employee Last Name is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                    }
                }while(1);

             }
             break;
            case 3:
            {
                do
                {
                    string ph1;
                    cout<<"ENTER THE PHONE NUMBER :";
                    getchar();
                    getline(cin,ph1);
                    try{
                        if(validNumber(ph1)){
                            itr->second.setPhone1(ph1);
                            cout<<"Employee phone1  is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
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
                    string ph2;
                    cout<<"ENTER THE PHONE NUMBER :";
                    getchar();
                    getline(cin,ph2);
                    try{
                        if(validNumber(ph2)){
                            itr->second.setPhone2(ph2);
                            cout<<"Employee Phone2 is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
                    }
                }while(1);

             }
             break;
           case 5:
           {
                do
                {
                    string bu;
                    cout<<"ENTER THE BUSINESS UNIT :";
                    getchar();
                    getline(cin,bu);
                    try{
                        if(validCharDigits(bu)){
                            itr->second.setBu(bu);
                            cout<<"Employee Business Unit is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                            cout<<"Employee Practice is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                             cout<<"Employee qualification is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                             cout<<"Employee Area of Expertise is successfully updated"<<endl;
                            break;
                        }
                        else
                            throw(1);
                    }
                    catch(int a){
                        cout<<"INVALID STRING "<<endl;
                        cout<<"ENTER VALID STRING AGAIN"<<endl;
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
 
 cout<<"ENTER PROJECT  ID";
 string pId;
 cin>>pId;
 int ch1;
 
 map<string,Project *>::iterator itr;
 itr = P.find(pId);
      
    if(itr == P.end())
        cout << "PROJECT IS NOT PRESENT" ;
    else
    {              
        if(itr->second->getType()=="telecom"){
             telecom *tpr=(telecom *)itr->second;
    
                do{
                    
                    cout<<"\n#1 ADD DESCRIPTION: "<<endl;
                    cout<<"#2 ADD CLIENT NAME: "<<endl;
                    cout<<"#3 Add start date: "<<endl;
                    cout<<"#4 Add end date: "<<endl;
                    cout<<"#5 Add profit center: "<<endl;
                    cout<<"#6 Add priority "<<endl;
                    cout<<"#7 Add number of required employee"<<endl;
                    cout<<"#8 Add internet Provider"<<endl;
                    cout<<"#9 Add satellite Links"<<endl;
                    cout<<"#10 Add telecom Standards"<<endl;
                    cout<<"ENTER THE CHOICE: "<<endl;
                    cin>>ch1;


             

                switch(ch1)
                    {
                    case 1:
                    {
                        do
                        {
                            string description;
                            cout<<"ENTER THE description :";
                            getchar();
                            getline(cin,description);
                            try{
                                if(validCharDigits(description)){
                                    tpr->setdesc(description);
                                     cout<<"Project description is successfully updated"<<endl;
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
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
                                cout<<"ENTER THE clientName :";
                                getchar();
                                getline(cin,clientName);
                                try{
                                    if(validCharDigits(clientName)){
                                        tpr->setclientName(clientName);
                                        cout<<"Project clientName is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                                        tpr->setstDate(st);
                                        cout<<"Project start date is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
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
                                    if(validDate(ed)){
                                        tpr->setedDate(ed);
                                        cout<<"Project end date is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                 
                            
                        }
                        break;
                        case 5:
                        {
                            string profit_center;
                            cout<<"Enter profit center :";
                            getchar();
                            getline(cin,profit_center);  
                            tpr->setprofCenter(profit_center);
                            cout<<"Project profit center is successfully updated"<<endl;
                        }
                        break;
                        case 6:
                        {
                            do
                            {
                                string priority;
                                cout<<"ENTER THE priority :";
                                getchar();
                                getline(cin,priority);
                                try{
                                    if(validPriority(priority)){
                                        tpr->setPriority(priority);
                                        cout<<"Project priority is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                   
                            
                        }
                        break;

                        case 7:
                        {
                            int noOfEmp;
                            cout<<"Enter the number of required employee :";
                            getchar();
                            cin>>noOfEmp;  
                          tpr->setNoOfEmp(noOfEmp);
                          cout<<"Project number of required employee is successfully updated"<<endl;
                        
                        }
                        break;
                        
                        
                        case 8:
                        {
                            do
                            {
                                string internetProvider;
                                cout<<"ENTER THE InternetProvider :";
                                getchar();
                                getline(cin,internetProvider);
                                try{
                                    if(validCharDigits(internetProvider)){
                                        tpr->setInternetProvider(internetProvider);
                                        cout<<"Project Internet Provider is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                   
                        
                        }
                        break;
                        
                        case 9:
                        {
                            do
                            {
                                string satelliteLinks;
                                cout<<"ENTER THE satelliteLinks :";
                                getchar();
                                getline(cin,satelliteLinks);
                                try{
                                    if(validCharDigits(satelliteLinks)){
                                        tpr->setSatelliteLinks(satelliteLinks);
                                        cout<<"Project satelliteLinks is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                
                        
                        }
                        break;

                        
                        case 10:
                        {
                            do
                            {
                                string telecomStandards;
                                cout<<"ENTER THE telecom Standards :";
                                getchar();
                                getline(cin,telecomStandards);
                                try{
                                    if(validCharDigits(telecomStandards)){
                                        tpr->setTelecomStandards(telecomStandards);
                                        cout<<"Project telecom Standards is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                 
                        
                        }
                        break;
                    }
                }while(ch1<11);
        }
        else if(itr->second->getType()=="banking"){
                   banking *bpr=(banking *)itr->second;
                do{
                    cout<<"\n#1 ADD DESCRIPTION: "<<endl;
                    cout<<"#2 ADD CLIENT NAME: "<<endl;
                    cout<<"#3 Add start date: "<<endl;
                    cout<<"#4 Add end date: "<<endl;
                    cout<<"#5 Add profit center: "<<endl;
                    cout<<"#6 Add priority "<<endl;
                    cout<<"#7 Add number of required employee"<<endl;
                    cout<<"#8 Add current Account Module Purchased"<<endl;
                    cout<<"#9 Add loan Account Module Purchased"<<endl;
                    cout<<"#10 Add customizations"<<endl;
                    cout<<"ENTER THE CHOICE: "<<endl;
                    cin>>ch1;

                switch(ch1)
                    {
                    case 1:
                    {
                        do
                        {
                            string description;
                            cout<<"ENTER THE description :";
                            getchar();
                            getline(cin,description);
                            try{
                                if(validCharDigits(description)){
                                    bpr->setdesc(description);
                                    cout<<"Project description is successfully updated"<<endl;
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
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
                                cout<<"ENTER THE clientName :";
                                getchar();
                                getline(cin,clientName);
                                try{
                                    if(validCharDigits(clientName)){
                                        bpr->setclientName(clientName);
                                        cout<<"Project clientName is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                                        cout<<"Project start date is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
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
                                    if(validDate(ed)){
                                        bpr->setedDate(ed);
                                        cout<<"Project end date is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;
                        case 5:
                    {
                            string profit_center;
                            cout<<"Enter profit center :";
                            getchar();
                            getline(cin,profit_center);  
                           bpr->setprofCenter(profit_center);
                            cout<<"Project profit center is successfully updated"<<endl;
                    }
                    break;
                        case 6:
                        {
                            do
                            {
                                string priority;
                                cout<<"ENTER THE priority :";
                                getchar();
                                getline(cin,priority);
                                try{
                                    if(validPriority(priority)){
                                        bpr->setPriority(priority);
                                        cout<<"Project priority is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;

                        case 7:
                        {
                            int noOfEmp;
                            cout<<"Enter the number of required employee :";
                            getchar();
                            cin>>noOfEmp;  
                            bpr->setNoOfEmp(noOfEmp);
                        cout<<"Project  number of required employee is successfully updated"<<endl;
                        }
                        break;
                        
                        
                        case 8:
                        {
                            do
                            {
                                string currentAccountModulePurchased;
                                cout<<"ENTER THE Current Account Module Purchased :";
                                getchar();
                                getline(cin,currentAccountModulePurchased);
                                try{
                                    if(validCharDigits(currentAccountModulePurchased)){
                                        bpr->setCurrentAccountModulePurchased(currentAccountModulePurchased);
                                        cout<<"Project Current Account Module Purchased is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                
                        
                        }
                        break;

                        case 9:
                        {
                            do
                            {
                                string loanAccountModulePurchased;
                                cout<<"ENTER THE loanAccountModulePurchased :";
                                getchar();
                                getline(cin,loanAccountModulePurchased);
                                try{
                                    if(validCharDigits(loanAccountModulePurchased)){
                                        bpr->setLoanAccountModulePurchased(loanAccountModulePurchased);
                                        cout<<"Project Loan Account Module Purchased is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                
                        
                        }
                        break;


                        case 10:
                        {
                            do
                            {
                                string customizations;
                                cout<<"ENTER THE customizations :";
                                getchar();
                                getline(cin,customizations);
                                try{
                                    if(validCharDigits(customizations)){
                                        bpr->setCustomizations(customizations);
                                        cout<<"Project customizations is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                   
                        
                        }
                        break;
                        
                    }
                }while(ch1<11);

        }
        else{

               do{
                    cout<<"\n#1 ADD DESCRIPTION: "<<endl;
                    cout<<"#2 ADD CLIENT NAME: "<<endl;
                    cout<<"#3 Add start date: "<<endl;
                    cout<<"#4 Add end date: "<<endl;
                    cout<<"#5 Add profit center: "<<endl;
                    cout<<"#6 Add priority "<<endl;
                    cout<<"#7 Add number of required employee"<<endl;
                    cout<<"ENTER THE CHOICE: "<<endl;
                    cin>>ch1;

                switch(ch1)
                    {
                    case 1:
                    {   
                        do
                        {
                            string description;
                            cout<<"ENTER THE description :";
                            getchar();
                            getline(cin,description);
                            try{
                                if(validCharDigits(description)){
                                    itr->second->setdesc(description);
                                    cout<<"Project description is successfully updated"<<endl;
                                    break;
                                }
                                else
                                    throw(1);
                            }
                            catch(int a){
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
                                cout<<"ENTER THE clientName :";
                                getchar();
                                getline(cin,clientName);
                                try{
                                    if(validCharDigits(clientName)){
                                        itr->second->setclientName(clientName);
                                        cout<<"Project clientName is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
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
                                       cout<<"Project start date is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
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
                                    if(validDate(ed)){
                                        if(date_cmp(ed)==1)
                                        itr->second->setedDate(ed);
                                       cout<<"Project end date is successfully updated"<<endl;
                                            break;                                
                                    }
                                    throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID END DATE "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;
                        case 5:
                         {
                            string profit_center;
                            cout<<"Enter profit center :";
                            getchar();
                            getline(cin,profit_center);  
                            itr->second->setprofCenter(profit_center);
                             cout<<"Project profit center is successfully updated"<<endl;
                        }
                        break;
                        case 6:
                        {
                            do
                            {
                                string priority;
                                cout<<"ENTER THE priority :";
                                getchar();
                                getline(cin,priority);
                                try{
                                    if(validPriority(priority)){
                                        itr->second->setPriority(priority);
                                        cout<<"Project priority is successfully updated"<<endl;
                                        break;
                                    }
                                    else
                                        throw(1);
                                }
                                catch(int a){
                                    cout<<"INVALID STRING "<<endl;
                                    cout<<"ENTER VALID STRING AGAIN"<<endl;
                                }
                            }while(1);
                            
                        }
                        break;

                        case 7:
                        {
                            int noOfEmp;
                            cout<<"Enter the number of requirred employee :";
                            getchar();
                            cin>>noOfEmp;  
                            itr->second->setNoOfEmp(noOfEmp);
                            cout<<"Project number of requirred employee is successfully updated"<<endl;
                        }
                        break;
                        
                        
                    }
                }while(ch1<8);
        }
                    
    }
     saveProject(P);
}