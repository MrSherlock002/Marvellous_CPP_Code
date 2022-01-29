//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  WAP program to count of ON bits without using (%)mod and (/)slash.
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

int CountBit(int iNo)
{
int i=0 , iCnt=0,iResult=0;

int iMask = 0x00000001;

for(i=1; i<32; i++)
{
iResult = iMask & iNo;

if(iResult !=0)
{
    iCnt++;
}
iMask = iMask << 1;
}

return iCnt;
}




int main()
{
    int iValue=0,iIndex=0,iRet=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    iRet = CountBit(iValue);

    cout<<"\n Count of ON bits : "<<iRet<<"\n";
    return 0;
}