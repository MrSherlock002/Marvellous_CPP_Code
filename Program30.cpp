//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  Toggle bit.
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;
typedef unsigned int UINT;


/* 
    op1     op2     &       |       ^
    1       0       0       1       1       
    0       1       0       1       1
    1       1       1       1       0
    0       0       0       0       0
*/

UINT ToggleBit(UINT iNo, int iPos)
{
    int iMask = 0x00000001;
    int iResult = 0;

    if((iPos<1) || (iPos>32))
    {
        return 0;
    }
    
    iMask = iMask << (iPos-1);

    iResult = iNo ^ iMask;

    return iResult;
} 

int main()
{
    int iValue=0,iIndex=0,iRet=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    cout<<"\n Enter the Index :";
    cin>>iIndex;

    iRet = ToggleBit(iValue,iIndex);

    cout<<"\n Updated Number is : "<<iRet<<"\n";
    return 0;
}