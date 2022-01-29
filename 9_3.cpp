/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (9_3)
//  Accept number from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void Display(int iNo)
{
int static i;
for (i =1; i<=iNo;i++)
{

printf("\t%d\t*",i);
}

}


int main()
{
int static iValue;
cout<<"\n Enter No : ";
cin>>iValue;

Display(iValue);


return 0;
}
