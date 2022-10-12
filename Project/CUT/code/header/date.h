#ifndef HDATE
#define HDATE


#include<iostream>
using namespace std;
#define CURRYEAR 2022
/********************************************
 * *FUNCTION NAME : date.h 
 *
 * *DESCRIPTION   : This function maintans a standard date format throughout the program and
 *                  keeps a tab on the timeline consistency across functions so any user doesn't enter an erratic date.
 *
 * *RETURNS       : No Returns 
 *
 *
 *
*********************************************/
class DATE{
    public:
    DATE(){}
    DATE(int dd, int mm, int yy){
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }
    int getDD();
    int getMM();
    int getYY();
    void dateDisplay();
    int operator==(DATE d1);
    int operator<(DATE &that);
    int validDate();

    private:
    int dd,mm,yy;
    
};

#endif