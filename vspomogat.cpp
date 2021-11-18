#include "middle_str.h"
bool isbukva(char c)
{
    if(c>64 && c<91 || c>96 && c<123 || c>191 && c<256)
    {
       return true;
    }else{return false;}
}
long long itc_len(string a)
{
    long long k=0;
    long long i=0;
    while(a[i]!='\0')
    {
        k=k+1;
        i=i+1;
    }
    return k;
}

string itc_slice_str(string str,int start, int endd)
{
    long long l;
    l=itc_len(str);
    string n="";
    if(start>endd)
    {
        return str;
    }
    if(endd>l-1)
    {
        endd=l-1;
    }
    for(int i=start;i<endd+1;i++)
    {
        n+=str[i];
    }
    return n;
}
char inttosimb(int a)
{
    int ot='-1';
    if(a==0)
    {
        ot='0';
    }else if(a==1)
    {
        ot='1';
    }else if(a==2)
    {
        ot='2';
    }else if(a==3)
    {
        ot='3';
    }else if(a==4)
    {
        ot='4';
    }else if(a==5)
    {
        ot='5';
    }else if(a==6)
    {
        ot='6';
    }else if(a==7)
    {
        ot='7';
    }else if(a==8)
    {
        ot='8';
    }else if(a==9)
    {
        ot='9';
    }else if(a==10)
    {
        ot='A';
    }else if(a==11)
    {
        ot='B';
    }else if(a==12)
    {
        ot='C';
    }else if(a==13)
    {
        ot='D';
    }else if(a==14)
    {
        ot='E';
    }else if(a==15)
    {
        ot='F';
    }else
    {
        return -1;
    }
    return ot;
}
