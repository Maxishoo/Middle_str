#include "middle_str.h"

bool itc_isDigit(unsigned char a)
{
    int ot=-1;
    bool otvet=false;
    if(a=='0')
    {
        ot=0;
    }else if(a=='1')
    {
        ot=1;
    }else if(a=='2')
    {
        ot=2;
    }else if(a=='3')
    {
        ot=3;
    }else if(a=='4')
    {
        ot=4;
    }else if(a=='5')
    {
        ot=5;
    }else if(a=='6')
    {
        ot=6;
    }else if(a=='7')
    {
        ot=7;
    }else if(a=='8')
    {
        ot=8;
    }else if(a=='9')
    {
        ot=9;
    }else
    {
        return otvet;
    }
    if(ot!=-1)
    {
        otvet=true;
    }
    return otvet;
}
