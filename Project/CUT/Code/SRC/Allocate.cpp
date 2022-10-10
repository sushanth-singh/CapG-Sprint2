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
        if(itr->second->getNoOfEmp() > itr->second->getNoOfAllocated())
        {
            int n;

        do{
            try{
            cout<<"Enter the number of employeee you want to allocate :  ";
            cin>>n;
            if(itr->second->getNoOfEmp() < n+itr->second->getNoOfAllocated()){
                throw n;
            }
            break;
            }
            catch(int n){
            cout<<"Excess employees added"<<endl;
            }
        }while(1);
        
         for(int i=0;i<n;i++)
         {
            string eId;
        
            map<string,Employee>::iterator itr1;
            do{
                do{
                        try{
                            cout<<"Enter the employee id you want to assign to the project"<<endl;
                            cin>>eId;
                            itr1 = E.find(eId);
                            
                            if(itr1 == E.end())
                            {
                                throw eId;
                            }
                            break;
                        }
                        catch(string eId){
                        cout << eId << "Employee Id is not present" << endl;
                        }
                }while (1);
      

                if((itr1->second.getAp1()=="0"||itr1->second.getAp2()=="0"||itr1->second.getAp3()=="0")){
                    flag=1;
                    
                    itr1->second.setAssignedProject(itr->first);
                    int NoOfAllocated = itr->second->getNoOfAllocated();
                    itr->second->setNoOfAllocated(++NoOfAllocated);
                    cout<<"Employee is successfully assigned"<<endl;
                    break;
                }
                else
                {
                    cout<<"Employee is already assigned to other projects 123"<<endl;
                }
            }while(1);

            }    
         }
        else
        {
            cout<<"Required employees are already allocated"<<endl;

        }
    }
    return flag;         
}