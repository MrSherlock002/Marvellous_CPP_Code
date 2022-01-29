/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (8_5)
//  A program which accept range from user and display all numbers in between that range in reverse order.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void RangeDisplayRev(int iStart , int iEnd)
{
int i= 0;
if (iStart<=iEnd)
{
for(i=iEnd; i>=iStart; i--)
{
cout<<"\n "<<i;
}
}

else
{
    cout<<"\n Invalid Range : ";
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

RangeDisplayRev(iValue1,iValue2);

return 0;
}