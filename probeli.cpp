#include "middle_str.h"


string itc_rmFreeSpace(string str)
{
    string neww="";
    long start=-1;
    for(long i=0;i<itc_len(str);i++)
    {
        if(str[i]==' ')
        {
            if(start==-1 && i!=0 && i!=itc_len(str)-1)
            {
                neww+=str[i];
                start=i;
            }
        }else
        {
            neww+=str[i];
            start=-1;
        }
    }
    return neww;
}
