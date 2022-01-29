/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (8_3)
//  A program which accept range from user and display sum of all numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int RangeSum(int iStart , int iEnd)
{
int i= 0,iSum=0;
if (iStart<=iEnd&& iStart>=0)
{
for(i=iStart; i<=iEnd; i++)
{
iSum = iSum + i;
}
return iSum;
}

else
{
    cout<<"\n Invalid Range :";
}
return 0;
}

int main()
{
int iValue1 = 0,iValue2=0;
int static iRet;

cout<<"\n Enter starting point : ";
cin>>iValue1;
cout<<"\n Enter ending point : ";
cin>>iValue2;

iRet = RangeSum(iValue1,iValue2);
if(iRet!=0)
{
cout<<"\n Addition is = "<<iRet;
}
return 0;
}