//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  Toggle the first and last nibble of number.
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

UINT ToggleNibble(int iNo)
{
UINT i=0 , iCnt=0,iRet=0;

UINT iMask = 0xF000000F;

iRet = iNo ^ iMask;

return iRet;
}




int main()
{
    UINT iValue=0,iIndex1=0,iRet=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    iRet = ToggleNibble(iValue);

    //printf("%u",iRet);
    cout<<"\n Output : "<<iRet<<"\n";
    return 0;
}