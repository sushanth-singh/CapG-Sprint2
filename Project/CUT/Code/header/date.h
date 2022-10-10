#include<iostream>
using namespace std;
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
    int dd,mm,yy;
    public:
    DATE(){}
    DATE(int dd, int mm, int yy){
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }


    int getDD(){
        return this->dd;
    }

    int getMM(){
        return this->mm;
    }

    int getYY(){
        return this->yy;
    }
    void dateDisplay(){
        cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
    }



    int operator==(DATE d1){
        if(getDD()==d1.getDD() && getMM()==d1.getMM() && getYY()==d1.getYY()){
            return 1;
        }
        return 0;
    }
    
    int operator<( DATE &that)
    {
        if(getYY() != that.getYY())
            return (getYY() < that.getYY() ? 1 : -1 );

        if(getMM() != that.getMM())
            return (getMM() < that.getMM()? 1 : -1);

        if(getDD() != that.getDD())
            return (getDD() < that.getDD()? 1 : -1);

     return 0;
    }

    int validDate()
    {
        if(this->yy>=2022)
        {
            switch (this->mm)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    {if(this->dd>=1 && this->dd<=31){
                        //cout<<"VALID DATE:"<<endl;
                        return 1;
                    }}
                break;

                case 4:
                case 6:
                case 9:
                case 11:
                    {if(this->dd>=1 && this->dd<=30){
                        //cout<<"VALID DATE:"<<endl;
                        return 1;
                    }}
                break;

                case 2:
                    {if(((this->yy % 4 == 0) && (this->yy % 100 != 0)) || (this->yy % 400 == 0)){
                        if(this->dd>=1 && this->dd<=29){
                            //cout<<"VALID DATE:"<<endl;
                            return 1;
                        }
                    }
                    else if(this->dd>=1 && this->dd<=28){
                        //cout<<"VALID DATE:"<<endl;
                        return 1;
                    }else{
                        //cout<<"INVALID DATE"<<endl;
                        return 0;
                    }}
                break;
                
                default:
                    //cout<<"INVALID DATE"<<endl;
                    return 0;
                    break;
            }

        }
        return 0;
    }
    
};