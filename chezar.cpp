#include "middle_str.h"
string itc_Cezar(string str, int k)
{
    if (str == "")
		return "";


    if (k == 0) return str;
    for(long i=0;i<itc_len(str);i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            if(k>0)
            {
                k = k % 26;
                if((str[i]+k)>'z' )
                {
                    str[i]='a'+((str[i]+k)-'z')-1;
                }else
                {
                    str[i]=str[i]+k;
                }
            }else if(k<0)
            {
                k=-1*k;
                k = k % 26;
                if((str[i]-k)<'a' )
                {
                    str[i]=123-('a'-(str[i]-k));
                }else
                {
                    str[i]=str[i]-k;
                }
                k=-1*k;
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if(k>0)
            {
                k = k % 26;
                if((str[i]+k)>'Z' )
                {
                    str[i]='A'+((str[i]+k)-'Z')-1;
                }else
                {
                    str[i]=str[i]+k;
                }
            }else if(k<0)
            {
                k=-1*k;
                k = k % 26;
                if((str[i]-k)<'A' )
                {
                    str[i]=91-('A'-(str[i]-k));
                }else
                {
                    str[i]=str[i]-k;
                }
                k=-1*k;
            }
        }
    }
    return str;
}
