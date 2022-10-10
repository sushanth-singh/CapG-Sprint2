// #include<iostream>
// using namespace std;
#include "../header/header.h"

/********************************************
 * *FUNCTION NAME : main() 
 *
 * *DESCRIPTION   : This is the main menu of the appplication. The function shows a menu-driven appproach in 
 *                  making the HR management application.
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/
int main()
{
    int choice;
    do{
        
        cout<<"\n#1 ADD EMPLOYEE: "<<endl;
        cout<<"#2 ADD PROJECT: "<<endl;
        cout<<"#3 Allocate Project: "<<endl;
        cout<<"#4 DeAllocate Project: "<<endl;
        cout<<"#5 DELETE EMPLOYEE: "<<endl;
        cout<<"#6 DELETE PROJECT: "<<endl;
        cout<<"#7 UPDATE EMPLOYEE : "<<endl;
        cout<<"#8 UPDATE PROJECT : "<<endl;
        cout<<"#9 GENERATE REPORTS : "<<endl;
        
            cout<<"ENTER THE CHOICE: "<<endl;
            cin>>choice;


        switch(choice)
        {
            case 1:
                addEmp();                
                break;

            case 2:
                 addProject();
                 break;

            case 3:
                LoadFile("../data/Employee.txt","../data/Project.txt",3);
                break;
            
            case 4: 
                LoadFile("../data/Employee.txt","../data/Project.txt",4);
                break;

            case 5:
                LoadFile("../data/Employee.txt","../data/Project.txt",5);
                break;
            
            case 6:
                LoadFile("../data/Employee.txt","../data/Project.txt",6);
                break;
            
            case 7:
                LoadFile("../data/Employee.txt","../data/Project.txt",7);
                break;

            case 8:
                LoadFile("../data/Employee.txt","../data/Project.txt",8);
                break;

            case 9:
                menuReports();

        }

    }while(choice!=9);
    return 0;

}