/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (6_3)
//  A program which accept number from user and return the count of digits in between 3 and 7.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int CountRange(int iNo)
{
int iDigit=0,iCnt =0;
if (iNo == 0)
{
iCnt++;
return iCnt;
}
while(iNo!=0)
{
iDigit = iNo%10;
if (iDigit > 3 && iDigit < 7)
{
iCnt++;
}
iNo=iNo/10;
}
return iCnt;
}


int main()
{
int iValue = 0,iRet=0;
cout<<" Enter your number : ";
cin>>iValue;

iRet = CountRange(iValue);
cout<<"\n Total digits in between 3 & 7 in given number "<<iValue<<" = "<<iRet;
return 0;
}