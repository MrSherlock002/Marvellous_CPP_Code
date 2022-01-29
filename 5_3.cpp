/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (5_3)
//  A program which accept number from user and count the frequency of 2 in it.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int CountTwo(int iNo)
{
if(iNo < 0)
{
iNo=-iNo;
}
int iDigit=0,iCnt =0;
while(iNo>0)
{
iDigit = iNo%10;
if (iDigit == 2)
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

cout<<"\n Enter your number : ";
cin>>iValue;

iRet = CountTwo(iValue);
cout<<iRet;
return 0;
}