/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (6_2)
//  A program which accept number from user and return the count of odd digits.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int CountOdd(int iNo)
{
int iDigit=0,iCnt =0;
if (iNo == 0)
{
return iCnt;
}
while(iNo!=0)
{
iDigit = iNo%10;
if (iDigit%2==1 || iDigit%2 == -1)
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

iRet = CountOdd(iValue);
cout<<"\n Total odd digits in given number "<<iValue<<" = "<<iRet;
return 0;
}