/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (4_1)
//  wap a program which accept one number from the user and display its multiplication of factors.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int MultiFact(int iNo)
{
    int i,iMult=1;
    for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
int iValue = 0;
int iRet = 0;
cout<<"\n Enter Number :";
cin>>iValue;

iRet = MultiFact(iValue);

cout<<iRet;

return 0;
}