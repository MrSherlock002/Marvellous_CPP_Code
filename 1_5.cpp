/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (1_5)
//  It is used to print * on screen equals to input value	
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
iValue =5;

Accept(iValue);
    return 0;
}