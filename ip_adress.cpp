#include "middle_str.h"

int itc_str_to_int(char a)
{
    int ot=-1;
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
        return -1;
    }
    return ot;
}
int strtoint(string str)
{
    int mn=1;
    int otv=0;
    for(int i=0;i<itc_len(str);i++)
    {
        otv=otv + ( itc_str_to_int(str[itc_len(str)-i-1]) * mn );
        mn=mn*10;
    }
    return otv;
}
bool itc_isIp(string str)
{
    if (str == "")
		return false;

    bool otv=true;
    long start=-1;
    if(str[0]=='.' || str[itc_len(str)-1]=='.')
    {
        return false;
    }
    for(long i=0;i<itc_len(str);i++)
    {
        if(itc_isDigit(str[i])==true)
        {
            if(start==-1)
            {
                start=i;
            }
        }else if(str[i]=='.')
        {
            if(i==0)
            {
                otv=false;
                return otv;
            }else if( strtoint(itc_slice_str(str,start,i-1))>255)
            {
                otv=false;
                return otv;
            }
            start=-1;
        }else
        {
            otv=false;
            return otv;
        }
    }

    if (start!=-1) {
       if( strtoint(itc_slice_str(str,start,itc_len(str)-1))>255)
            {
                otv=false;
                return otv;
            }
    }

    return otv;
}
