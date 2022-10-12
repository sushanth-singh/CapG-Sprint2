#include <date.h>

int DATE::getDD()
{
    return this->dd;
}

int  DATE::getMM()
{
    return this->mm;
}

int  DATE::getYY()
{
    return this->yy;
}

void  DATE::dateDisplay(){
    cout<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<endl;
}

int  DATE::operator==(DATE d1)
{
    if(getDD()==d1.getDD() && getMM()==d1.getMM() && getYY()==d1.getYY())
    {
        return 1;
    }
    return 0;
}

int  DATE::operator<(DATE &that)
{
    if(getYY() != that.getYY())
        return (getYY() < that.getYY() ? 1 : -1 );

    if(getMM() != that.getMM())
        return (getMM() < that.getMM()? 1 : -1);

    if(getDD() != that.getDD())
        return (getDD() < that.getDD()? 1 : -1);

    return 0;
}

int  DATE::validDate()
{
    if(this->yy>=CURRYEAR)
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
                {
                    if(this->dd>=1 && this->dd<=31)
                    {
                        return 1;
                    }
                }
                break;

            case 4:
            case 6:
            case 9:
            case 11:
                {
                    if(this->dd>=1 && this->dd<=30)
                        {
                            return 1;
                        }
                }
                break;

            case 2:
                {
                    if(((this->yy % 4 == 0) && (this->yy % 100 != 0)) || (this->yy % 400 == 0))
                    {
                        if(this->dd>=1 && this->dd<=29)
                        {
                            return 1;
                        }
                    }
                    else if(this->dd>=1 && this->dd<=28)
                    {
                        return 1;
                    }else
                    {
                        return 0;
                    }
                }
                break;
        }
    }
    return 0;
}

