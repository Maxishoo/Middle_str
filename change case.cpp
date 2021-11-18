#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c)
{
    if(c>96 && c<123 || c>223 && c<256)
    {
       c-=32;
    }
    return c;
}
unsigned char itc_changeCase(unsigned char c)
{
    if(c>96 && c<123 || c>223 && c<256)
    {
       c-=32;
       return c;
    }else if(c>64 && c<91 || c>191 && c<224)
    {
        c+=32;
    }
    return c;
}
