/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (3_5)
//  wap a program which accept a character from user and check whether that character is vowel (a,e,i,o,u) or not.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<stdbool.h>

using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkVowel(char cValue)
{
if(cValue == 'A' || cValue =='a' ||cValue == 'E' || cValue =='e' ||cValue == 'I' || cValue =='i' ||cValue == 'O' || cValue =='o' || cValue == 'U' || cValue =='u')
{
    return TRUE;
}
else
    {
        return FALSE;
    }
}

int main()
{
char cValue = '\0';
BOOL bRet = FALSE;

cout<<"Enter Character : ";
cin>>cValue;


bRet=ChkVowel(cValue);
if (bRet == TRUE)
{
    cout<<"It is Vowel"<<"\n True";
}
else
{
    cout<<"It is Not a Vowel"<<"\n False";
}
    return 0;
}