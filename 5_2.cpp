/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (5_2)
//  A program which accept number from user and check wheather it contains 0 in it or not.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
if(iNo < 0)
{
iNo=-iNo;
}
int iDigit=0;
while(iNo>0)
{
iDigit = iNo%10;
if (iDigit==0)
{
return TRUE;
}
iNo=iNo/10;
}
return FALSE;
}


int main()
{
int iValue = 0;
BOOL bRet = FALSE;
cout<<"\n Enter Your number :";
cin>>iValue;

bRet = ChkZero(iValue);

if(bRet == TRUE)
{
cout<<"\n It Contains Zero";
} 
else
{
cout<<"\n There is NOT Zero";
}

return 0;
}