#include "middle_str.h"
int itc_covert_num(long long a,int sis)
{
    if(sis<2 || sis>10)
    {
        return (-1);
    }
    if(sis==10)
    {
        return(a);
    }
    else
    {
        if(a<0)
        {
            return (-1);
        }
        long long k=1;
        long long otv=0;
        long long b;
        while(a>0)
        {
            b=a%sis;
            otv=otv+b*k;
            a=a/sis;
            k=k*10;
        }
        return(otv);
    }
}

string tostr(int a)
{
    int s=0;
    string neww="";
    while(a!=0)
    {
        s=a%10;
        a=a/10;
        neww+=inttosimb(s);
    }
    string neww2="";
    for(int i=0;i<itc_len(neww);i++)
    {
        neww2+=neww[itc_len(neww)-i-1];
    }
    return neww2;
}

string itc_covert_num_16(long long a,int sis)
{
    string otv="";

    if(sis<2 || sis>16)
    {
        return "";
    }
    if(sis==10)
    {
        return tostr(a);
    }
    else
    {
        if(a<0)
        {
            return "";
        }
        long long k=1;
        long long b;
        while(a>0)
        {
            b=a%sis;
            otv+=inttosimb(b);
            a=a/sis;
            k=k*10;
        }
        //return(otv);
    }

    string neww2="";
    for(int i=0;i<itc_len(otv);i++)
    {
        neww2+=otv[itc_len(otv)-i-1];
    }
    return neww2;
}


string itc_DecToBin(string str)
{
    long start=-1;
    string neww="";
    for(long i=0;i<itc_len(str);i++)
    {
        if(itc_isDigit(str[i]))
        {
            if(i==0)
            {
                start=i;
            }
            else if(start==-1)
            {
                start=i;
            }
        }else
        {
            if(start!=-1)
            {
                string slice=itc_slice_str( str,start,i-1 );
                int tint=strtoint( slice );
                neww+=tostr( itc_covert_num( tint,2) );
                neww+=str[i];
                start=-1;
            }
        }
    }

            if(start!=-1)
            {
                long long i = itc_len(str);
                string slice=itc_slice_str( str,start,i-1 );
                int tint=strtoint( slice );
                neww+=tostr( itc_covert_num( tint,2) );
                //neww+=str[i];
                start=-1;
            }

    return neww;
}
string itc_decToBase(int num, int base)
{
    string neww="";
    neww=itc_covert_num_16(num,base);
    return neww;
}
