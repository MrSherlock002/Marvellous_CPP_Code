/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (3_1)
//  wap a program which accept one number from the user and print that number of even numbers on screen.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void PrintEven(int iNo)
{
if(iNo <=0 )
{
    iNo = -iNo;
}
int i,p=0;
for(i=0; i<iNo; i++)
{
p = p+2;
cout<<p<<"\t";
}
}



int main()
{
int iValue = 0;
cout<<" Enter Value : "<<" \n";
cin>>iValue;

PrintEven(iValue);
    return 0;
}