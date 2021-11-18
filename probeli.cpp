#include "middle_str.h"


string itc_rmFreeSpace(string str)
{
    if (str == "")
		return "";

    string neww="";
    long start=-1;
    int startsim=0;
    for(long i=0;i<itc_len(str);i++)
    {
        if(str[i]==' ')
        {
            if((start==-1) && (startsim==1)&&(i!=0) && (i!=itc_len(str)-1))
            {
                neww+=str[i];
                start=i;
            }
        }else
        {
            neww+=str[i];
            start=-1;
            startsim=1;
        }
    }

    if (neww=="") return "";

    long long l = itc_len(neww);
    if (neww[l-1]==' ') {
         string news = itc_slice_str(neww,0,l-2);
         return news;
    }

    return neww;
}
