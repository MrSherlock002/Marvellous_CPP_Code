//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  Toggle the bits in range number.
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

UINT ToggleRange(int iNo,int iS,int iE)
{
UINT i=0 , iCnt=0,iRet=0;

UINT iMask  = 0x00000001;
UINT iMask1 = 0xFFFFFFFF;
UINT iMask2 = 0xFFFFFFFF;

iMask1 = iMask1<<(iS-1);

iMask2 = iMask2>>(32-iE);

iMask = iMask1 & iMask2;

iRet = iNo ^ iMask;

return iRet;
}




int main()
{
    UINT iValue=0,iStart=0,iRet=0,iEnd=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    cout<<"\n Enter the start range :";
    cin>>iStart;

    cout<<"\n Enter the end range :";
    cin>>iEnd;


    iRet = ToggleRange(iValue,iStart,iEnd);

    //printf("%u",iRet);
    cout<<"\n Output : "<<iRet<<"\n";
    return 0;
}