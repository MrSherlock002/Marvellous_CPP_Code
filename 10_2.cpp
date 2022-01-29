/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (10_1)
//  Accept number from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void Display(int iRow,int iCol)
{
int static i,j;
for (i =1; i<=iRow;i++)
{
for(j=1;j<=iCol;j++)
cout<<"\t*";
cout<<"\n";

}

}


int main()
{
int static iValue1,iValue2;

cout<<"\n Enter Row : ";
cin>>iValue1;

cout<<"\n Enter Column : ";
cin>>iValue2;

Display(iValue1,iValue2);

return 0;
}



