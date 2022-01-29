//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (27/10/2021)
//  Problems on bitwise operations.
//  WAP to split number byte by byte.
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

void DisplayByte(UINT iNo)
{
UINT Byte1 = iNo & 0X000000FF;

UINT Byte2 = iNo & 0X0000FF00;
Byte2 = Byte2 >> 8;

UINT Byte3 = iNo & 0X00FF0000;
Byte3 = Byte3 >> 16;

UINT Byte4 = iNo & 0XFF000000;
Byte4 = Byte4 >> 24;


cout<<"\n Byte1 = "<<Byte1;
cout<<"\n Byte2 = "<<Byte2;
cout<<"\n Byte3 = "<<Byte3;
cout<<"\n Byte4 = "<<Byte4;
}




int main()
{
    UINT iValue=0,iStart=0,iRet=0,iEnd=0;
    
    cout<<"\n Enter the number :";
    cin>>iValue;

    DisplayByte(iValue);
}