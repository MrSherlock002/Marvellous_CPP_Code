/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (4_5)
//  wap a program which accept one number from the user and return difference between summation of all its factors and non factors.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int FactDiff(int iNo)
{
int i = 0,iSum = 0;
int iSum1=0,iSum2=0,iDiff=0;
    if(iNo<0)
        {
            iNo = -iNo;
        }
    for (i=1; i<iNo; i++)
        {
        if(iNo%i==0)
            {
                iSum1 = iSum1 + i;  
            }
        else
        {
            iSum2 = iSum2 +i;
        }
        } 
        iDiff = iSum1 - iSum2;
        return iDiff;
}

int main()
{
int iValue = 0;
int iRet = 0;

cout<<"\n Enter Value : ";
cin>>iValue;

iRet = FactDiff(iValue);
cout<<iRet;
    return 0;
}