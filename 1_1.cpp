/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021)
//  WAP to divide two numbers.
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

int Divide(int iNo1, int iNo2)
{
int iAns = 0;
if (iNo2 <0)
{
    return -1;
}
iAns = iNo1/iNo2;

return iAns;

}



int main()
{
 int iValue1=15, iValue2=5;
 int iRet = 0;
 iRet = Divide(iValue1, iValue2);

cout<<"Division is : "<<iRet;

return 0;

}
