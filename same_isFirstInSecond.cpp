#include "middle_str.h"
char itc_sameChar(string str)
{
    char otv;
    for(long i=0;i<itc_len(str);i++)
    {
        for(long j=i+1;j<itc_len(str);j++)
        {
            if(str[i]==str[j] && str[i]!=' ' && str[j]!=' ' && str[i]!=',' && str[j]!=',')
            {
                otv=str[i];
            }
        }
    }
    return otv;
}
