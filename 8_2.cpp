/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (8_2)
//  A program which accept range from user and display all even numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void RangeDisplayEven(int iStart , int iEnd)
{
int i= 0;
if (iStart<=iEnd)
{
for(i=iStart; i<=iEnd; i++)
{
if(i%2==0)
{
cout<<"\n"<<i;
}
}
}

else
{
cout<<"\n Invalid Range :";
}
}

int main()
{
int iValue1 = 0,iValue2=0;
double dRet = 0;

cout<<"\n Enter starting point : ";
cin>>iValue1;
cout<<"\n Enter ending point : ";
cin>>iValue2;

RangeDisplayEven(iValue1,iValue2);

return 0;
}