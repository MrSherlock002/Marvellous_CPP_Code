/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (3_4)
//  wap a program which accept one character from the user and convert the case of that character.(upper/lower).
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<string.h>

using namespace std;

void Display_Convert(char cValue)
{
if(cValue == toupper(cValue))
{

//cout<<"%c"<<(tolower(cValue));
printf("%c",tolower(cValue));
}
else if(cValue == tolower(cValue))
{
    //cout<<"%c"<<(toupper(cValue));
    printf("%c",toupper(cValue));
}
}

int main()
{
char cValue = '\0';
cout<<"Enter Character :\n";
cin>>cValue;

Display_Convert(cValue);
    return 0;
}