/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (4_3)
//  wap a program which accept one number from the user and display all its non factors.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void NonFact(int iNo)
{
int i = 0;
    if(iNo<0)
        {
            iNo = -iNo;
        }
    for (i=2; i<iNo; i++)
        {
        if(iNo%i!=0)
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

NonFact(iValue);
    return 0;
}