/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (5_1)
//  A program to return reverse number
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void DisplayDigit(int iNo)
{
if(iNo < 0)
{
iNo=-iNo;
}
int iDigit=0;
while(iNo>0)
{
iDigit = iNo%10;
cout<<iDigit;
iNo=iNo/10;
}



}

int main()
{
int iValue = 0;
cout<<"\n Enter your number :";
cin>>iValue;

DisplayDigit(iValue);
return 0;
}