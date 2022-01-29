/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (9_5)
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

//printf("\t%d",i*2);
cout<<"\t"<<i*2;
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


