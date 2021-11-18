#include "middle_str.h"
bool itc_compare(string S1, string S2)
{
  bool otv=false;
  if(itc_len(S1)==itc_len(S2))
  {
      long long k=0;
      for(long long i=0;i<itc_len(S1);i++)
      {
          if(S1[i]==S2[i])
          {
              k+=1;
          }else
          {
              return otv=false;
          }
      }
      if(k==itc_len(S1))
      {
          otv=true;
      }
  }
  return otv;
}
