/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (6_1)
//  A program which accept number from user and return the count of even digits.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int CountEven(int iNo)
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
if (iDigit%2==0 || iDigit%2==-0)
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
cout<<"\n Enter your number :";
cin>>iValue;


iRet = CountEven(iValue);
cout<<"\n Total even digits in given number "<<iValue<<" = "<<iRet;
return 0;
}