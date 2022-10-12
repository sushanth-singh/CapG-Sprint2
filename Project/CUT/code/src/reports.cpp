#include <../header/header.h>

/********************************************
 * *FUNCTION NAME : listEmpGPid() 
 *
 * *DESCRIPTION   : This function gives a report of the projects that are assigned to a particular employee. 
 *
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void listEmpGPid(map<string,Project *> P,map<string,Employee> E)
{
    string pId;
    cout<<"ENTER THE PROJECT ID: ";
    cin>>pId;

    map<string,Project *>::iterator itr1 = P.find(pId);
    if(itr1 == P.end())
        cout << "PROJECT IS NOT PRESENT"<<endl;
    else
    {   
        map<string,Employee>::iterator itr;
        for(itr = E.begin(); itr != E.end(); itr++) 
        {        
            if(itr->second.searchAssignedProject(pId))
            {
                cout<<"------------------------------------------------------"<<endl;
                cout<<"\nEMPLOYEE ID: " << itr->first<<endl ;
                cout<<"------------------------------------------------------"<<endl;    
            }
        }
    }
}


/********************************************
 * *FUNCTION NAME : listProjectGEid() 
 *
 * *DESCRIPTION   : This function gives a report of the employees that are assigned to each project. 
 *
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void listProjectGEid(map<string,Project *> P,map<string,Employee> E){
    string eId;
    cout<<"ENTER THE EMPLOYEE ID: ";
    cin>>eId;

    
    map<string,Employee>::iterator itr = E.find(eId);
    if(itr == E.end())
        cout << "EMPLOYEE IS NOT PRESENT"<<endl ;
    else
    {   
        cout<<"------------------------------------------------------"<<endl;
        if(itr->second.getAp1()!="0"){
            cout<<"\nPROJECT ID OF PROJECT 1: "<<itr->second.getAp1()<<endl;
        }

        if(itr->second.getAp2()!="0"){
            cout<<"\nPROJECT ID OF PROJECT 2: "<<itr->second.getAp2()<<endl;
        }

        if(itr->second.getAp3()!="0"){
            cout<<"\nPROJECT ID OF PROJECT 3: "<<itr->second.getAp3()<<endl;
        }
        cout<<"------------------------------------------------------"<<endl;
    }

}


/********************************************
 * *FUNCTION NAME : listProjectGPC() 
 *
 * *DESCRIPTION   : This function gives a report of projects that have priority 1 and are in-progress.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void listProjectGPC(map<string,Project *> P){
    map<string,Project *>::iterator itr;
    for(itr = P.begin(); itr != P.end(); itr++) 
    {        
    if(itr->second->getPriority()=="1" && date_cmp(itr->second->getedDate())==1){ 
        cout<<"------------------------------------------------------"<<endl;
        cout<<"\nPROJECT ID: " << itr->first<<endl ;
        cout<<"------------------------------------------------------"<<endl;    
    }
    }
}


/********************************************
 * *FUNCTION NAME : listEmpGAoe() 
 *
 * *DESCRIPTION   : This function gives a report of employees with a particular area of expertise.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
void listEmpGAoe(map<string,Employee> E){
    string expertise;
    cout<<"ENTER THE AREA OF EXPERTISE: ";
    getchar();
    getline(cin,expertise);

    map<string,Employee>::iterator itr;
    for(itr = E.begin(); itr != E.end(); itr++) 
    {        
        if(itr->second.getAreaOfExpertise()==expertise){
            cout<<"------------------------------------------------------"<<endl;
            cout<<"\nEMPLOYEE ID: " << itr->first<<endl ;
            cout<<"------------------------------------------------------"<<endl;   
        }
    }
}


/********************************************
 * *FUNCTION NAME : menuReports() 
 *
 * *DESCRIPTION   : This menu driven function let's the user view different types of reports based on the options.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/

void menuReports(){
   int choice;
   map<string,Project *> P=  loadProject(PRJPATH);
   map<string,Employee> E = loadEmployee(EMPPATH);
    do
    {
        cout<<"....................DISPLAY REPORTS MENU...................."<<endl;
        cout<<"\n 1. DISPLAY LIST OF EMPLOYEES ASSIGNED TO PROJECT WITH GIVEN PROJECT ID "<<endl;
        cout<<" 2. DISPLAY LIST OF PROJECT TO WHICH EMPLOYEE WITH GIVEN EMPLOYEE ID IS ALLOCATED "<<endl;
        cout<<" 3. DISPLAY LIST OF PRIORITY 1 PROJECT WHICH ARE “IN-PROGRESS” "<<endl;
        cout<<" 4. DISPLAY LIST OF EMPLOYEES HAVING GIVEN “AREA OF EXPERTISE” "<<endl;
        cout<<" 5. EXIT TO THE MAIN MENU"<<endl;
        cout<<"..................................................."<<endl;
        cout<<"ENTER THE CHOICE: ";
        cin>>choice;
        cout<<"..................................................."<<endl;

        switch(choice)
        {
            case 1:
                listEmpGPid(P,E);                
                break;

            case 2:
                listProjectGEid(P,E);
                break;

            case 3:
                listProjectGPC(P);
                break;
            
            case 4: 
                listEmpGAoe(E);
                break;
        }
    }while(choice!=5);
}