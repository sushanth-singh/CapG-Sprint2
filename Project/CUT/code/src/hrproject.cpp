#include <../header/header.h>
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
    do
    {
        cout<<".............MENU............."<<endl;
        cout<<"\n 1. ADD EMPLOYEE "<<endl;
        cout<<" 2. ADD PROJECT "<<endl;
        cout<<" 3. ALLOCATE PROJECT "<<endl;
        cout<<" 4. DEALLOCATE PROJECT "<<endl;
        cout<<" 5. DELETE EMPLOYEE "<<endl;
        cout<<" 6. DELETE PROJECT "<<endl;
        cout<<" 7. UPDATE EMPLOYEE "<<endl;
        cout<<" 8. UPDATE PROJECT "<<endl;
        cout<<" 9. GENERATE REPORTS "<<endl;
        cout<<" 10. EXIT"<<endl;
        cout<<".............................."<<endl;
        cout<<" ENTER THE CHOICE: ";
        cin>>choice;
        cout<<".............................."<<endl;

        switch(choice)
        {
            case 1:
                addEmp();                
                break;

            case 2:
                 addProject();
                 break;

            case 3:
                LoadFile(EMPPATH,PRJPATH,3);
                break;
            
            case 4: 
                LoadFile(EMPPATH,PRJPATH,4);
                break;

            case 5:
                LoadFile(EMPPATH,PRJPATH,5);
                break;
            
            case 6:
                LoadFile(EMPPATH,PRJPATH,6);
                break;
            
            case 7:
                LoadFile(EMPPATH,PRJPATH,7);
                break;

            case 8:
                LoadFile(EMPPATH,PRJPATH,8);
                break;

            case 9:
                menuReports();
                break;
            
            case 10:
                cout<<"THANK YOU FOR USING THIS APPLICATION!!"<<endl;
                break;

        }

    }while(choice!=10);
    return 0;

}