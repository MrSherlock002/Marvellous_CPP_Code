/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (4_2)
//  wap a program which accept one number from the user and display its factors in decreasing order.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void FactRev(int iNo)
{
int i = 0;
    if(iNo<0)
        {
            iNo = -iNo;
        }
    for (i=iNo/2; i>0; i--)
        {
        if(iNo%i==0)
            {
                cout<<"\t"<<i;
            }
        }   
}

int main()
{
int iValue = 0;
cout<<"\n Enter Number :";
cin>>iValue;

FactRev(iValue);
    return 0;
}