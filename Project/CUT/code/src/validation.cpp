#include"../header/header.h"


/********************************************
 * *FUNCTION NAME : validPriority() 
 *
 * *DESCRIPTION   : This function validates the priority entered by the user since it should be within a particualr range. 
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int validPriority(string str){
    if(str>="1" && str<="3" &&  all_of(str.begin(), str.end(), ::isdigit)==1){
        //cout<<"VALID"<<endl;
        return 1;
    }else{
        //cout<<"INVALID"<<endl;
        return 0;
    }
}


/********************************************
 * *FUNCTION NAME : validCharDigits() 
 *
 * *DESCRIPTION   : This function ensures that only those values are entered in a particular field which are alphanumeric or alphabetic. 
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int validCharDigits(string str){
    if(!str.empty() &&  all_of(str.begin(), str.end(), ::isdigit)==0){
        //cout<<"VALID"<<endl;
        return 1;
    }else{
        //cout<<"INVALID"<<endl;
        return 0;
    }

}


/********************************************
 * *FUNCTION NAME : validNames() 
 *
 * *DESCRIPTION   : This function ensures that only alphabets are entered in a particular field. 
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int validNames(string str){
    if(!str.empty() &&  all_of(str.begin(), str.end(), ::isalpha)==1){
        //cout<<" VALID"<<endl;
        return 1;
     }else{
        //cout<<" NOT VALID"<<endl;
        return 0;
     }
}


/********************************************
 * *FUNCTION NAME : validNumber() 
 *
 * *DESCRIPTION   : This function ensures that only numbers are entered in a particular field. 
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int validNumber(string str){
    if(str.size()==10 && !str.empty() &&  all_of(str.begin(), str.end(), ::isdigit)==1){
        //cout<<" VALID"<<endl;
        return 1;
     }else{
        //cout<<" NOT VALID"<<endl;
        return 0;
     }
}

//compare string with current date:- returns 1 if current date<givendate
//returns -1 if current date>givendate
//returns 0 if current date=givendate


/********************************************
 * *FUNCTION NAME : date_cmp() 
 *
 * *DESCRIPTION   : This function compares the date entered in the file with the current date.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int date_cmp(string str){
    time_t now = time(0);
    tm *itm = localtime(&now);
     
    DATE cur(itm->tm_mday,itm->tm_mon+1,1900+itm->tm_year);
    //cur.dateDisplay();
    string dd2,mm2,yy2;
    int dd1,mm1,yy1;
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
    DATE prjDate(dd1,mm1,yy1);
    
    if((cur<prjDate)==1){
        //cout<<"CUR DATE IS LESS"<<endl;
        return 1;
    }else if((cur<prjDate)==-1){
        //cout<<"CUR DATE IS GREAT"<<endl;
        return -1;
    }
    // }else if((cur<prjDate)==0){
    //     //cout<<"SAME"<<endl;

    //     return 0;
    // }
    return 0;
}

//string is in date format or not and check day date and year accordingly 


/********************************************
 * *FUNCTION NAME : validDate() 
 *
 * *DESCRIPTION   : This function ensures the user enters the date in DD/MM/YYYY format only.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
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
        int a=d1.validDate();
        if(a==1){
            //cout << "VALID" << endl;
            return 1;
        }
        else{ 
            //cout<< "INVALID" <<endl;
            return 0;
        }
    }
    else{
        // cout << "NOT VALID" << endl;
        return 0;
    }
    return 0;
}


/********************************************
 * *FUNCTION NAME : validYN() 
 *
 * *DESCRIPTION   : This function ensures that a particular field only has Yes or No in its field.
 * 
 * *RETURNS       : No Returns 
 *
 *
*********************************************/
int validYN(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if(str=="yes"|| str=="no"){
        return 1;
    }else{
        return 0;
    }
}


