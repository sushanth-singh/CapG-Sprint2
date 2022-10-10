#include "../header/header.h"

/********************************************
 * 
 * *DESCRIPTION   : The block of code written below reads the employee file and separtes each entry. It
 *                  searches for valid entries and lets them through whereas the invalid entries are stored in a file 
 *                  after letting the user know about it.
 *
*********************************************/
map<string,Employee>  loadEmployee(string Empfile)
{
   int i=0;
   map<string,Employee> E;
   Employee e;
     
   ifstream input;
   input.open(Empfile);
   if (!input.is_open())
   {
      cout<<"UNABLE TO OPEN INPUT FILE " << Empfile << endl;
      return E;
   }

   string line;
   ofstream outfile;
   outfile.open(ERREMPLOYEE);
   if (!outfile.is_open())
   {
         cout << "UNABLE TO OPEN ERROR FILE FOR WRITNG" << endl;
         return E;
   }

   stringstream ss;
   while(getline(input,line))
   {     
      ss.clear();
      ss.str(line);
      string eId;
      string firstName;
      string lastName;
      string phone1;
      string phone2;
      string bU;
      string practice;
      string qualification;
      string areaOfExpertise;
      string tempPId;
      string ap1;
      string ap2;
      string ap3;
      string extraLine1;
      int count=0;
      
      if(getline(ss,eId,'|'))
      {
         count++;  
      }

      if(getline(ss,firstName,'|'))
      {
         if(validNames(firstName))
         {
            e.setFirstName(firstName);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID FIRST NAME"<<endl;
         }
         
      }

      if(getline(ss,lastName,'|'))
      {
         if(validNames(lastName))
         {
            e.setLastName(lastName);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID LAST NAME"<<endl;
         }
      }

      if(getline(ss,phone1,'|'))
      {
         if(validNumber(phone1))
         {
            e.setPhone1(phone1);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID PHONE NUMBER 1"<<endl;
         }
      }

      if(getline(ss,phone2,'|'))
      {
         if(validNumber(phone2))
         {
            e.setPhone2(phone2);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID PHONE NUMBER 2"<<endl;
         }
      }

      if(getline(ss,bU,'|'))
      {
         if(validCharDigits(bU))
         {
            e.setBu(bU);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID BUSINESS UNIT"<<endl;
         }
      }

      if(getline(ss,practice,'|'))
      {
         if(validCharDigits(practice))
         {
            e.setPractice(practice);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID PRACTICE"<<endl;
         }
      }

      if(getline(ss,qualification,'|'))
      {
         if(validCharDigits(qualification))
         {
            e.setQualification(qualification);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID QUALIFICATION"<<endl;
         }
      }

      if(getline(ss,areaOfExpertise,'|'))
      {         
         if(validCharDigits(areaOfExpertise))
         {
            e.setAreaOfExpertise(areaOfExpertise);
            count++;
         }
         else
         {
            cout<<eId<<"INVALID AREA OF Expertise"<<endl;
         }
      }
      
      if(getline(ss,ap1,'|'))
      {
            e.setAp1(ap1);
            count++;
      }

      if(getline(ss,ap2,'|'))
      {
            e.setAp2(ap2);
            count++;
      }

      if(getline(ss,ap3,'|'))
      {
            e.setAp3(ap3);
            count++;
      }

      if (count == 12)
      {    
               E[eId]=e;
               i++; 
      }
      else
      {
               outfile<<line<<endl;
      }

       ss.clear();
   } 
   
   outfile.close();
   input.close();


   return E;
}

/********************************************
 * 
 * *DESCRIPTION   : The block of code written below reads the project file and separtes each entry. It
 *                  searches for valid entries and lets them through whereas the invalid entries are stored in a file 
 *                  after letting the user know about it.
 *
*********************************************/

map<string,Project *> loadProject(string projectFile)
{
   ifstream input1;
   map<string,Project *> P;
   Project  *p;
   input1.open(projectFile);
   if (!input1.is_open())
   {
      cout<<"Unable to open input file " << projectFile<< endl;
      return P;
   }
   string line1;
   ofstream outfile1;
   outfile1.open(ERRPROJECT);
   if (!outfile1.is_open())
   {
         cout << "Unable to open error file for writting  errFileName.txt" << endl;
         return P;
   }
   while(getline(input1,line1))
   {
      stringstream ss1(line1);
      string pId;
      string type;
      string desc;
      string clientName;
      string stDate;
      string edDate;
      string profCenter;
      string priority;
      string extraLine;
      int noOfEmp;
      string SnoOfEmp;
      int noOfAllocated=0;
      string SnoOfAllocated;
      int count1=0;
      if(getline(ss1,pId,'|')){
         
         count1++;
      }
         
      if(getline(ss1,type,'|')){
         
         count1++;
      }

      if(getline(ss1,desc,'|')){
         
         count1++;
      }

      if(getline(ss1,clientName,'|')){
            if(validCharDigits(clientName)){
               count1++;
            }else{
               cout<<pId<<"INVALID CLIENT NAME"<<endl;
            }
      }
      
      if(getline(ss1,stDate,'|')){
         if(validDate(stDate)){
            count1++;
         }else{
            cout<<pId<<"INVALID START DATE"<<endl;
         }
      }

      if(getline(ss1,edDate,'|')){
         if(validDate(edDate)){
            count1++;
         }else{
            cout<<pId<<"INVALID END DATE"<<endl;
         } 
         
      }
      
      if(getline(ss1,profCenter,'|')){
         count1++;
      }

      if(getline(ss1,priority,'|'))
      {
         if(validPriority(priority))
         {
            count1++;
         }else
         {
            cout<<pId<<"INVALID PRIORITY"<<endl;
         }    
      }
         if(getline(ss1,SnoOfEmp,'|'))
         {
            noOfEmp = atoi(SnoOfEmp.c_str());
            
            count1++;  
         }

         if(getline(ss1,SnoOfAllocated,'|'))
         {
            noOfAllocated = atoi(SnoOfAllocated.c_str());
            
            count1++;  
         }
         
         if(type=="telecom")
         {
            string internetProvider;
            string  satelliteLinks;
            string  telecomStandards;
            if(getline(ss1,internetProvider,'|'))
            {
               if(validNames(internetProvider)){
                  count1++;  
               }else
               {
                  cout<<pId<<" INVALID INTERNET PROVIDER"<<endl;
               }
            }
            
            if(getline(ss1,satelliteLinks,'|'))
            {
               if(validNames(satelliteLinks)){
               count1++;  
               }else
               {
                  cout<<pId<<"INVALID SATELLITE LINKS"<<endl;
               } 
            }
            
            if(getline(ss1,telecomStandards,'|'))
            {
               if(validCharDigits(telecomStandards)){
                  count1++;  
               }else{
                  cout<<pId<<"INVALID TELECOM STANDARDS"<<endl;
               } 
            }
            
            if(getline(ss1,extraLine,'|'))
            {
               count1++;  
            }
            if(count1==13)
            {
               //cout<<"TELECOM"<<endl;
               telecom *t = new telecom;
               *t = telecom(pId, type, desc, clientName,  stDate, edDate,  profCenter,  priority, noOfEmp,noOfAllocated,internetProvider, satelliteLinks,  telecomStandards);
               p=t;
               P[pId]=p;
            }
            else
            {
               outfile1<<line1<<endl;  
            }
            
         }
         else if(type=="banking")
         {
            string currentAccountModulePurchased;
            string loanAccountModulePurchased ;
            string  customizations  ;

            if(getline(ss1,currentAccountModulePurchased,'|'))
            {
               if(validYN(currentAccountModulePurchased))
               {
                  count1++;
               }else
               {
                  cout<<pId<<"INVALID currentAccountModulePurchased"<<endl;
               }
            }
            if(getline(ss1,loanAccountModulePurchased,'|'))
            {
               if(validYN(loanAccountModulePurchased)){
                  count1++;
               }else{
                  cout<<pId<<"INVALID loanAccountModulePurchased"<<endl;
               }  
            }
            if(getline(ss1,customizations,'|'))
            {
               count1++;  
            }

            if(getline(ss1,extraLine,'|'))
            {
               count1++;  
            }
            if(count1==13)
            {
               banking *b = new banking;
               *b = banking(pId, type, desc, clientName,  stDate, edDate,  profCenter,  priority, noOfEmp,noOfAllocated,currentAccountModulePurchased, loanAccountModulePurchased,customizations);
               p= b;
               P[pId]=p;
            }
            else
            {
               outfile1<<line1<<endl;  
            }
            
      }
      else 
      {
            if(getline(ss1,extraLine,'|'))
            {
               count1++;  
            }
            if ((count1 ==10))
         {
            Project *p2 = new Project;
            *p2 = Project(pId,type,desc, clientName,  stDate,  edDate,  profCenter,  priority,  noOfEmp, noOfAllocated);
            p=p2;
            P[pId]=p;
            }      
            else
            {
               outfile1<<line1<<endl;
            }
               
      }
            
      } // end of while line in file
      outfile1.close();
      input1.close();

      return P;
      

}


/********************************************
 * *FUNCTION NAME : LoadFile() 
 *
 * *DESCRIPTION   : This function encompasses the function of loading the employee and project file for fucntinons like 
 *                  allocating employee, deallocating employee, deleting an employee, deleting a project, 
 *                  updating details of an employee amd updating details of a project.
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/

int LoadFile(string Empfile , string projectFile,int sw)
{
  
    map<string,Employee> E = loadEmployee(Empfile);
    map<string,Project *> P=  loadProject(projectFile);
            

    if(sw == 3)  
        {
        if(allocate(P,E))
            saveFile(P,E);
        }
    else if(sw == 4)
        deAllocate(P,E);
    else if(sw == 5)
        deleteEmp(E);
    else if(sw == 6)
        deletePrj(P);
        else if(sw == 7)
        updateEmp(E);
    else if(sw == 8)
        updateProject(P);
                 
   return 0;
}
