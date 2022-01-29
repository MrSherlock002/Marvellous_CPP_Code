//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  WAP to swap the first and last bit.
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

UINT SwapByte(UINT iNo)
{

return ((iNo & 0x00FFFF00) | (iNo << 24) | (iNo >> 24));

}




int main()
{
    UINT iValue=0,iRet=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    iRet = SwapByte(iValue);

    cout <<"\n Data is "<<iRet; 
}