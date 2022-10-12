#include "../header/header.h"

/********************************************
 * *FUNCTION NAME : allocate() 
 *
 * *DESCRIPTION   : This function helps the user to allocate projects to employees based on the requirement 
 *                  if they are free. 
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/

int allocate(map<string,Project *> &P , map<string,Employee> &E)
{
 
    cout<<"ENTER PROJECT ID: ";
    string pId;
    cin>>pId;

    int flag=0;

    map<string,Project *>::iterator itr;
    itr = P.find(pId);
      
    if(itr == P.end()){
        cout<<"\n***********************************************************"<<endl;
        cout << "THE GIVEN PROJECT IS NOT PRESENT"<<endl ;
        cout<<"\n***********************************************************"<<endl;
    }
    else
    {              
        if(itr->second->getNoOfEmp() > itr->second->getNoOfAllocated())
        {
            int n;

          do{
                try
                {
                    cout<<"ENTER THE NUMBER OF EMPLOYEE YOU WANT TO ALLOCATE :  ";
                    cin>>n;
                    if(itr->second->getNoOfEmp() < n+itr->second->getNoOfAllocated())
                    {
                         throw n;
                    }
                    break;
                }
                catch(int n)
                {
                    cout<<"\n***********************************************************"<<endl;
                    cout<<"EXCESS EMPLOYEES ARE ADDED"<<endl;
                    cout<<"\n***********************************************************"<<endl;
                }
            }while(1);
        
         for(int i=0;i<n;i++)
         {
            string eId;
        
            map<string,Employee>::iterator itr1;
            do{
                do{
                    try
                    {
                        cout<<"ENTER THE EMPLOYEE ID YOU WANT TO ALLOCATE THE PROJECT : ";
                        cin>>eId;
                        itr1 = E.find(eId);
                        
                        if(itr1 == E.end())
                        {
                            throw eId;
                        }
                        break;
                    }
                    catch(string eId)
                    {
                        cout<<"\n***********************************************************"<<endl;
                        cout << eId << "EMPLOYEE ID IS NOT PRESENT IN THE GIVEN FILE" << endl;
                        cout<<"\n***********************************************************"<<endl;
                    }
                }while (1);
      

                if((itr1->second.getAp1()=="0"||itr1->second.getAp2()=="0"||itr1->second.getAp3()=="0"))
                {
                    flag=1;
            
                    itr1->second.setAssignedProject(itr->first);
                    int NoOfAllocated = itr->second->getNoOfAllocated();
                    itr->second->setNoOfAllocated(++NoOfAllocated);
                    cout<<"\n------------------------------------------------------"<<endl;
                    cout<<"EMPLOYEE IS SUCCESSFULLY ASSIGNED TO THE PROJECT"<<endl;
                    cout<<"\n------------------------------------------------------"<<endl;
                    break;
                }
                else
                {
                    cout<<"\n***********************************************************"<<endl;
                    cout<<"EMPLOYEE IS ALREADY ASSIGNED TO THE THREE DIFFERENT PROJECTS"<<endl;
                    cout<<"PLEASE ENTER THE EMPLOYEE ID AGAIN"<<endl;
                    cout<<"\n***********************************************************"<<endl;
                }
            }while(1);

            }    
         }
        else
        {
            cout<<"\n***********************************************************"<<endl;
            cout<<"REQUIRED EMPLOYEES ARE ALREADY ASSIGNED TO THE PROJECT"<<endl;
            cout<<"\n***********************************************************"<<endl;

        }
    }
    return flag;         
}