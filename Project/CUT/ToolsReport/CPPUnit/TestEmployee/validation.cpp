#include "header.h"


int validPriority(string str){
    if(str>="1" && str<="3" &&  all_of(str.begin(), str.end(), ::isdigit)==1){
        return 1;
    }else{
        return 0;
    }
}


int validBu(string str){
    if(!str.empty() &&  all_of(str.begin(), str.end(), ::isdigit)==0){
        return 1;
    }else{
        return 0;
    }

}

int validNames(string str){
    if(!str.empty() &&  all_of(str.begin(), str.end(), ::isalpha)==1){
        return 1;
     }else{
        return 0;
     }
}
 
int validNumber(string str){
    if(str.size()==10 && !str.empty() &&  all_of(str.begin(), str.end(), ::isdigit)==1){
        return 1;
     }else{
        return 0;
     }
}

int validDate(string str){
    regex reg(R"(\d{2}/\d{2}/\d{4})");

    
    smatch m;
    if (regex_search(str, m, reg)){           
        string dd2;
        string mm2;
        string yy2;
        int dd1;
        int mm1;
        int yy1;
        stringstream ss(str);
        if(getline(ss,dd2,'/')){
            dd1=stoi(dd2);
        }
        if(getline(ss,mm2,'/')){
            mm1=stoi(mm2);
        }
        if(getline(ss,yy2,'/')){
            yy1=stoi(yy2);
        }
        DATE d1(dd1,mm1,yy1);
        int a=d1.validDate(str);
        if(a==1){
            return 1;
        }
        else{ 
            return 0;
        }
    }
    else{
        return 0;
    }
    return 0;
}


int validYN(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if(str=="yes"|| str=="no"){
        return 1;
    }else{
        return 0;
    }
}


