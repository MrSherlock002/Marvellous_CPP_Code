/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (2_2)
//  Accept one number from user and print that number of * on screen	
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

void Accept(int iNo)
{

    while(iNo>0)
    {
        cout<<" * ";
        iNo--;
    }
}


int main()
{
int iValue=0;

cout<<"Enter value : ";
cin>>iValue;

Accept(iValue);
    return 0;
}