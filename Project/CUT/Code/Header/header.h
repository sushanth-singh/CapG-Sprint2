#ifndef HEADER
#define HEADER

#include<iostream>
#include<fstream>
#include<vector>
#include<map>
#include<cstdlib>
#include "Employee.h"
#include "Project.h"
using namespace std;
#include <sstream>
#include<cstring>
#include<ctype.h>
#include<algorithm>
#include<regex>
#include"../src/date.h"
//change date.h directory 

void addEmp();
void  addProject();
int LoadFile(string Empfile , string projectFile,int sw);
map<string,Employee>  loadEmployee(string Empfile);
map<string,Project *> loadProject(string projectFile);
int saveFile(map<string,Project *> &P,map<string,Employee> &E);
void saveEmployee(map<string,Employee> &E);
void saveProject(map<string,Project *> &P);
void deAllocate(map<string,Project *> &P , map<string,Employee> &E);
int allocate(map<string,Project *> &P , map<string,Employee> &E);
void deletePrj(map<string,Project *> &P);
void deleteEmp(map<string,Employee> &E);
void updateEmp(map<string,Employee> &E);
void updateProject(map<string,Project *> &P);

//validation
int validPriority(string str);
int validCharDigits(string str);
int validNames(string str);
int validNumber(string str);
int validDate(string str);
int validYN(string str);
int date_cmp(string str);

//reports
void menuReports();
void listEmpGPid(map<string,Project *> P,map<string,Employee> E);
void listProjectGEid(map<string,Project *> P,map<string,Employee> E);
void listProjectGPC(map<string,Project *> P);
void listEmpGAoe(map<string,Employee> E);

#endif