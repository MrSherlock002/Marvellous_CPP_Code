//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  Accept two number of bits from user and toggle that bits.
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

/* 
    op1     op2     &       |       ^
    1       0       0       1       1       
    0       1       0       1       1
    1       1       1       1       0
    0       0       0       0       0
*/

int CountBit(int iNo,int i1, int i2)
{
int i=0 , iCnt=0,iRet=0;

int iMask = 0x00000001;
int iMask1 = 0x00000001;
int iMask2 = 0x00000001;

iMask1 = iMask1 <<(i1 -1);
iMask2 = iMask2 <<(i2 -1);

iMask = iMask1 | iMask2 ;

iRet = iMask & i1;

    iRet = iNo ^ iMask;

return iRet;
}



int main()
{
    int iValue=0,iIndex1=0,iIndex2=0,iRet=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    cout<<"\n Enter the Index 1 :";
    cin>>iIndex1;

    cout<<"\n Enter the Index 2 :";
    cin>>iIndex2;



    iRet = CountBit(iValue,iIndex1,iIndex2);

    cout<<"\n Output : "<<iRet<<"\n";
    return 0;
}