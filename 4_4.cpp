/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (4_4)
//  wap a program which accept one number from the user and return summation of all its non factors.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int SumNonFact(int iNo)
{
int i = 0,iSum = 0;
    if(iNo<0)
        {
            iNo = -iNo;
        }
    for (i=2; i<iNo; i++)
        {
        if(iNo%i!=0)
            {
                iSum = iSum + i;  
            }
        } 
        return iSum;
}

int main()
{
int iValue = 0;
int iRet = 0;

cout<<"\n Enter Value : ";
cin>>iValue;

iRet = SumNonFact(iValue);
cout<<"\n"<<iRet;
    return 0;
}