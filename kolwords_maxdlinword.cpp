#include "middle_str.h"
int itc_countWords(string str)
{
    long long lstr=itc_len(str);
    long start=-1;
    int k=0;
    for(long long i=0;i<lstr;i++)
    {
        if(isbukva(str[i])==true)
        {
            if(i==0)
            {
                start=i;
            }else if (start==-1) {
                if (str[i-1]==' ') start = i;
            }

        }else if(str[i]==' ')
        {
            start=-1;
            k++;
        }else
        {
            start=-1;
        }
    }
    if (start!=-1){
        k++;
    }
    return k;
}
string itc_maxCharWord(string str)
{
    long startmax=-1;
    long endmax=-1;
    long start=-1;
    long endd=-1;
    int kolslov=0;
    if (str == "")
		return "error";

    for(long i=0;i<itc_len(str);i++)
    {
        if(isbukva(str[i])==true)
        {
            if(i==0)
            {
                start=i;
            } else if (start==-1) {
                if(str[i-1]==' ') start = i;
            }
        }else if((str[i]==' ')|| (str[i]==',')|| (str[i]=='!')|| (str[i]=='?'))
        {
            if(start!=-1)
            {
            endd = i-1;
            kolslov++;
            if(endd-start>endmax-startmax)
            {
                startmax=start;
                endmax=endd;
            }
            start=-1;
            endd=-1;
            }
        }else
        {
            start=-1;
        }
    }

    if (start != -1) {
     endd = itc_len(str)-1;

     kolslov++;
     if(endd-start>endmax-startmax)
            {

                startmax=start;
                endmax=endd;
            }
    }

    if(kolslov==0)
    {
        return "error";
    }

    string tmp = itc_slice_str(str,startmax,endmax);

    return tmp;
}
