#include <../header/header.h>

/********************************************
 * *FUNCTION NAME : deAllocate() 
 *
 * *DESCRIPTION   : This function deallocates employees from the assigned project. It checks for multiple
 *                  conditions before deallocating the employee.
 * 
 * 
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/
void deAllocate(map<string,Project *> &P , map<string,Employee> &E)
{
 
    cout<<"ENTER PROJECT ID TO DEALLOCATE THE EMPLOYEES: ";
    string pId;
    cin>>pId;

    int flag=0;
    map<string,Project *>::iterator itr;

    itr = P.find(pId);        
    if(itr == P.end()){
        cout<<"\n***********************************************************"<<endl;
        cout << "PROJECT WITH GIVEN PROJECT ID IS NOT PRESENT IN THE FILE"<<endl;
        cout<<"\n***********************************************************"<<endl;
    }
    else
    {              
        if(itr->second->getNoOfAllocated())
        {
            int n;
            cout<<"ENTER THE NUMBER OF EMPLOYEES YOU WANT TO DEALLOCATE: ";
            cin>>n;
            if(n<=itr->second->getNoOfAllocated())
            {
                for(int i=0;i<n;i++)
                {
                    string eId;
                    map<string,Employee>::iterator itr1;
                    cout<<"ENTER THE EMPLOYEE ID YOU WANT TO DEALLOCATE TO THE PROJECT: ";
                    cin>>eId;
                    itr1 = E.find(eId);
                    
                    if(itr1 == E.end())
                    {
                        cout << "EMPLOYEE IS NOT PRESENT"<<endl ;
                    }
                    else
                    {                        
                        itr1->second.deallocateAssignedProject(pId);
                        int temp = itr->second->getNoOfAllocated()-1;
                        itr->second->setNoOfAllocated(temp);
                        flag = 1;
                        cout<<"\n---------------------------------------------------------"<<endl;
                        cout<<"EMPLOYEE IS DEALLOCATED SUCCESSFULLY!!"<<endl;
                        cout<<"\n---------------------------------------------------------"<<endl;
                    }   
                    if(flag == 0)
                    {
                        cout<<"\n***********************************************************"<<endl;
                        cout<<"PROJECT IS NOT ALLOCATED TO THET PARTICULAR EMPLOYEE"<<endl;
                        cout<<"\n***********************************************************"<<endl;
                    }
                    
                }
            }else
            {
                cout<<"\n***********************************************************"<<endl;
                cout<<"INVALID NUMBER OF EMPLOYEES ARE BEING TRY TO DEALLOCATE"<<endl;
                cout<<"\n***********************************************************"<<endl;
            }
            
        }
        else
        {
            cout<<"\n***********************************************************"<<endl;
            cout<<"NO EMPLOYEES IS ALLOCATED TO THAT PROJECT"<<endl;
            cout<<"\n***********************************************************"<<endl;

        }
    }
    if(flag==1){
        saveFile(P,E);
    }     
}