#include "../header/header.h"

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
 
 cout<<"ENTER PROJECT ID";
 string pId;
 cin>>pId;
 int flag=0;
 map<string,Project *>::iterator itr;
 itr = P.find(pId);
      
    if(itr == P.end())
        cout << "Project is not present" ;
    else
    {              
        if(itr->second->getNoOfAllocated())
        {
        //  cout << "Key-value pair present : " << itr->first<<endl;
            int n;
            cout<<"Enter the number of employeee you want to deallocate :  ";
            cin>>n;
            if(n<=itr->second->getNoOfAllocated())
            {
              for(int i=0;i<n;i++)
             {
                string eId;
                map<string,Employee>::iterator itr1;
                cout<<"Enter the employee id you want to deallocate to the project"<<endl;
                cin>>eId;
                itr1 = E.find(eId);
                
                if(itr1 == E.end())
                {
                    cout << "Employee is not present" ;
                }
                else{
                    
                       itr1->second.deallocateAssignedProject(pId);
                    
                       int temp = itr->second->getNoOfAllocated()-1;
                       itr->second->setNoOfAllocated(temp);
                       flag = 1;
                       cout<<"Employee is DeAssigned added"<<endl;
                   
                    }
                    
                    if(flag == 0)
                    {
                    cout<<"Project is not assigned to that particular employees"<<endl;
                    }
                    
             }
            }    
            else{
                        cout<<"Invalid no. of employees are being deallocated"<<endl;
            }
            
        }
        else
        {
            cout<<"No employees are assigned to the Project"<<endl;

        }
    }
    if(flag==1){
         saveFile(P,E);
    }     
}