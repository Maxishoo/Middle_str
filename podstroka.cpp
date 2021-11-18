#include "middle_str.h"
int itc_find_str(string str1,string str2)
{

    if (str1 == "")
		return -1;
	if (str1 != "" && str2 == "")
		return 0;

    long long lstr1=itc_len(str1);
    long long lstr2=itc_len(str2);
    int k=0;



    for(long long i=0;i<lstr1;i++)
    {

        if(str1[i]==str2[k])
        {
            k=k+1;
            if(k==lstr2)
            {
            return i-k+1;
            }
        }
        else
        {
            k=0;
        }
    }
    return -1;
}
bool itc_isFirstInSecond(string s1, string s2)
{
    if(itc_find_str(s2,s1)!=-1)
    {
        return true;
    }else{return false;}
    return false;
}
