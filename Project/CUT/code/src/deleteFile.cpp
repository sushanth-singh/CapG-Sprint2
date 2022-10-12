#include <../header/header.h>

/********************************************
 * *FUNCTION NAME : deleteEmp() 
 *
 * *DESCRIPTION   : This function deletes an employee from the employee file if they are not assigned to any project.
 *                  The function checks for other multiple conditions before deleting an employee.
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/

void deleteEmp(map<string,Employee> &E)
{ 
    cout<<"ENTER EMPLOYEE ID: ";
    string eId;
    cin>>eId;

    int flag=0;
    map<string,Employee>::iterator itr;
    itr = E.find(eId);
    if(itr == E.end()){
        cout<<"\n***********************************************************"<<endl;
        cout << "EMPLOYEE WITH EMPLOYEE ID "<<eId<<" IS NOT PRESENT"<<endl;
        cout<<"\n***********************************************************"<<endl;
    }else
    {              
        if(itr->second.getAp1()=="0" && itr->second.getAp2()=="0" && itr->second.getAp3()=="0")
        { 
            E.erase(eId);
            cout<<"\n-----------------------------------------------------------"<<endl;
            cout<<"EMPLOYEE "<<eId<<" DELETED SUCCESSFULLY"<<endl;
            cout<<"\n-----------------------------------------------------------"<<endl;
            flag=1;
        }
        else
        {
            cout<<"\n***********************************************************"<<endl;
            cout<<"EMPLYEE IS ASSIGNED TO PROJECTS: "<<endl;
            cout<<"FREE THE EMPLOYEE FROM PROJECTS AND THEN DELETE IT"<<endl;
            cout<<"\n***********************************************************"<<endl;
        }
    }
    if(flag==1){
        saveEmployee(E);
    }     
}

/********************************************
 * *FUNCTION NAME : deletePrj() 
 *
 * *DESCRIPTION   : This function deletes a project from the projects file if no employees are not
 *                  assigned to the project. The function checks for other multiple conditions before deleting a project.
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/

void deletePrj(map<string,Project *> &P)
{ 
    cout<<"ENTER PROJECT ID: ";
    string pId;
    cin>>pId;
    int flag=0;
    map<string,Project *>::iterator itr;
    itr = P.find(pId);
      
    if(itr == P.end()){
        cout<<"\n***********************************************************"<<endl;
        cout << "PROJECT WITH PROJECT ID "<<pId<<" IS NOT PRESENT"<<endl; 
        cout<<"\n***********************************************************"<<endl;
    }
    else
    {              
        if(itr->second->getNoOfAllocated() == 0)
        {
            P.erase(pId);
            free(itr->second);
            cout<<"\n-----------------------------------------------------------"<<endl;
            cout<<"PROJECT "<<pId<<" DELETED SUCCESSFULLY"<<endl;
            cout<<"\n-----------------------------------------------------------"<<endl;
            flag=1;
        }
        else{
            cout<<"\n***********************************************************"<<endl;
            cout<<"EMPLYEES ARE ASSIGNED TO THE PROJECT: "<<endl;
            cout<<"FREE THE EMPLOYEES FROM PROJECT AND THEN DELETE IT"<<endl;
            cout<<"\n***********************************************************"<<endl;
        }
    }
    if(flag==1){
         saveProject(P);
    }
}