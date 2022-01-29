/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (6_4)
//  A program which accept number from user and return the multiplication of all digits.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int MultDigits(int iNo)
{
int iDigit=0,iCnt =0, iMult=1;
if (iNo == 0)
{
iMult = 0;
return iMult;
}
while(iNo!=0)
{
iDigit = iNo%10;
if (iDigit !=0)
{
iMult = iMult*iDigit; 
}
iNo=iNo/10;
}
return iMult;
}


int main()
{
int iValue = 0,iRet=0;
cout<<"\n Enter your number : ";
cin>>iValue;

iRet = MultDigits(iValue);
cout<<"\n Total multiplication of digits in given number "<<iValue<<" = "<<iRet;
return 0;
}