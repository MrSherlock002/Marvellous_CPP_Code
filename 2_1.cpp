/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (2_1)
//  Accept one number from user and print * that number of time.	
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

void Accept(int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<" * ";
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