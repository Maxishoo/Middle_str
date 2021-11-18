#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED

#include"middle_str.h"

#include <iostream>
using namespace std;
#include <strings.h>

bool itc_isDigit(unsigned char a);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);

long long itc_len(string a);
bool isbukva(char c);
string itc_slice_str(string str,int start, int endd);

string itc_maxCharWord(string str);
int itc_countWords(string str);
bool itc_compare(string S1, string S2);

string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
int strtoint(string str);
char itc_sameChar(string str);

string itc_DecToBin(string str);
char inttosimb(int a);
bool itc_isFirstInSecond(string s1, string s2);
string itc_decToBase(int num, int base);

#endif // MIDDLE_STR_H_INCLUDED
