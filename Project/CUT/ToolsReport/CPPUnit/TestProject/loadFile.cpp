#include "../header/header.h"

map<string,Employee>  loadEmployee(string Empfile){
int i=0;
    map<string,Employee> E;
    Employee e;
    //only one object
   
    ifstream input;
    input.open(Empfile);
              if (!input.is_open())
              {
                    cout<<"Unable to open input file " << Empfile << endl;
                    return E;
              }
              string line;
              ofstream outfile;
              outfile.open("../data/errEmpName.txt");
              if (!outfile.is_open())
              {
                    cout << "Unable to open error file for writting  errFileName.txt" << endl;
                    return E;
              }
              while(getline(input,line))
              {     
                     stringstream ss(line);
                       
                    // string s = ss.str();
                    // cout<<"......full line....."<<endl<<s<<endl;
                    
                      
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
                    //  vector <string> assignedProject;
                  
                     int count=0;
                      if(getline(ss,eId,'|'))
                     {
                        count++;  
                     }
                     if(getline(ss,firstName,'|')){
                        if(validNames(firstName)){
                           e.setFirstName(firstName);
                           count++;
                        }else{
                           cout<<eId<<"INVALID FIRST NAME"<<endl;
                        }
                        
                     }
                     if(getline(ss,lastName,'|')){
                         if(validNames(lastName)){
                           e.setLastName(lastName);
                           count++;
                        }else{
                           cout<<eId<<"INVALID LAST NAME"<<endl;
                        }
                     }
                     if(getline(ss,phone1,'|')){
                        if(validNumber(phone1)){
                         e.setPhone1(phone1);
                        count++;
                        }
                        else{
                           cout<<eId<<"INVALID PHONE NUMBER 1"<<endl;
                        }
                     }
                     if(getline(ss,phone2,'|')){
                         if(validNumber(phone2)){
                         e.setPhone2(phone2);
                        count++;
                        }
                        else{
                           cout<<eId<<"INVALID PHONE NUMBER 2"<<endl;
                        }
                     }
                     if(getline(ss,bU,'|')){
                        if(validBu(bU)){
                           e.setBu(bU);
                           count++;
                        }else{
                           cout<<eId<<"INVALID BUSINESS UNIT"<<endl;
                        }
                     }
                     if(getline(ss,practice,'|')){
                        if(validBu(practice)){
                           e.setPractice(practice);
                           count++;
                        }
                        else{
                           cout<<eId<<"INVALID PRACTICE"<<endl;
                        }
                     }
                     if(getline(ss,qualification,'|')){
                        if(validBu(qualification)){
                           e.setQualification(qualification);
                           count++;
                        }else{
                           cout<<eId<<"INVALID QUALIFICATION"<<endl;
                        }
                     }
                     if(getline(ss,areaOfExpertise,'|')){
                        if(validBu(areaOfExpertise)){
                           e.setAreaOfExpertise(areaOfExpertise);
                           count++;
                        }else{
                           cout<<eId<<"INVALID AREA OF Expertise"<<endl;
                        }
                     }
                     
                      e.clearAssigned();
                     for(int inc=0;inc<3;inc++){
                        if(getline(ss,tempPId,'|')){
                            e.setAssignedProject(tempPId);
                            count++;
                        }
                        else {
                            break;
                        }
                     }
 
                     if ((count >= 8 && count <= 12) )
                     {    
                            //validation of e
                             E[eId]=e;
                             i++; 
                     }
                     else
                     {
                             outfile<<line<<endl;
                           //   return E;
                     }
             } // end of while line in file
           

             outfile.close();
             input.close();
             cout<<"i="<<i<<endl;
             int c=i;
             cout<<"Employeeee data :"<<endl;
             map<string,Employee>::iterator itr;
             for(itr = E.begin(); itr != E.end(); ++itr) 
             {        
                cout<<"\nEMPLOYEE ID: " << itr->first<<endl ;
                itr->second.display();
                cout <<'\n';    
               //e[j].display();
             }

             return E;
}



map<string,Project *> loadProject(string projectFile){
  ifstream input1;
     map<string,Project *> P;
          Project  *p;
     int i1=0,i2=0,i3=0;
    input1.open(projectFile);
              if (!input1.is_open())
              {
                    cout<<"Unable to open input file " << projectFile<< endl;
                    return P;
              }
              string line1;
              ofstream outfile1;
              outfile1.open("../data/errProjectName.txt");
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
                           if(validBu(clientName)){
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
                        if(validPriority(priority)){
                           count1++;
                        }else{
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
                     // transform(type.begin(), type.end(), type.begin(), ::tolower);
                        if(type=="telecom")
                        {
                             string internetProvider;
                             string  satelliteLinks;
                             string  telecomStandards;
                            if(getline(ss1,internetProvider,'|'))
                            {
                              if(validNames(internetProvider)){
                                 count1++;  
                              }else{
                                 cout<<pId<<"INVALID INTERNET PROVIDER"<<endl;
                              }
                            }
                            if(getline(ss1,satelliteLinks,'|'))
                            {
                                 if(validNames(satelliteLinks)){
                                 count1++;  
                              }else{
                                 cout<<pId<<"INVALID SATELLITE LINKS"<<endl;
                              } 
                            }
                            if(getline(ss1,telecomStandards,'|'))
                            {
                                 if(validBu(telecomStandards)){
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
                                cout<<"TELECOM"<<endl;
                               telecom *t = new telecom;
                               *t = telecom(pId, type, desc, clientName,  stDate, edDate,  profCenter,  priority, noOfEmp,noOfAllocated,internetProvider, satelliteLinks,  telecomStandards);
                               p=t;
                               P[pId]=p;

                               i3++;

                                cout<<"TELECOMEnddddddddddddddd"<<endl;
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
                                 if(validYN(currentAccountModulePurchased)){
                                    count1++;
                                 }else{
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
                                //cout<<"banking"<<endl;
                               banking *b = new banking;
                               *b = banking(pId, type, desc, clientName,  stDate, edDate,  profCenter,  priority, noOfEmp,noOfAllocated,currentAccountModulePurchased, loanAccountModulePurchased,customizations);
                                p= b;
                                P[pId]=p;
                                  cout<<"banking endddddddd"<<endl;
                                  i2++;
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
                            //   p2[i1] = Project(pId,type,desc, clientName,  stDate,  edDate,  profCenter,  priority,  noOfEmp, noOfAllocated);
                            //   p=&p2[i1];
                            //   P[pId]=&p2[i1];
                              *p2 = Project(pId,type,desc, clientName,  stDate,  edDate,  profCenter,  priority,  noOfEmp, noOfAllocated);
                              p=p2;
                              P[pId]=p;
                               map<string,Project *>::iterator itr3;
                               cout<<"-----for loop-------"<<i1<<"-------"<<endl;
                             for(itr3=P.begin();itr3!=P.end();itr3++){
                                 cout<<".......Inside..loop....."<<endl;
                                  cout<<"First is "<<itr3->first<<endl;
                                  P[itr3->first]->display();
                                //   itr3->second->display();
                             }
                             i1++;
                                   
                           }
                            
                         else
                        {
                             outfile1<<line1<<endl;
                           //   return P;
                        }
                        }
                     
                    
             } // end of while line in file
             outfile1.close();
             input1.close();
             cout<<"i1="<<i1<<endl;
             int c1=i1;
             cout<<"Project data :"<<endl;
             map<string,Project *>::iterator itr1;
             for(itr1=P.begin();itr1!=P.end();itr1++)
             {
                cout<<"Inside project for:"<<endl;
                itr1->second->display();
                cout<<itr1->second->getType();
                    string type1 =itr1->second->getType();
                    //cout<<itr1->second->getType();
                   // transform(type.begin(), type.end(), type.begin(), ::tolower);
                    cout<<"type"<<type1<<endl;
                    if(type1 == "telecom")
                    {
                        cout<<"Inside telecom for:"<<endl;
                     cout<<"\nPROJECT ID: " << itr1->first<<endl; 
                     telecom *tpr=(telecom *)itr1->second;
                     tpr->display();
                     cout <<'\n';    
               
                    }
                    else if(type1 == "banking")
                    {
                        cout<<"Inside banking for:"<<endl;
                     cout<<"\nPROJECT ID: " << itr1->first<<endl; 
                     banking *bpr=(banking *)itr1->second;
                     bpr->display();
                     cout <<'\n';    
               
                    }
                    else
                   {
                        cout<<"\nPROJECT ID: " << itr1->first<<endl; 
                        itr1->second->display();
                        cout <<'\n';    
               
                   }
             }

             return P;
            

}




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
