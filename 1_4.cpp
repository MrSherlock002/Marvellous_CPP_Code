/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (1_4)
//  It is used to check number is divisible by 5 or not	
//
/////////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check (int iNo)
{
if ((iNo%5)==0)
{
    return TRUE;
}
else
{
    return FALSE;
}

}



int main()
{
int iValue = 0;
BOOL bRet = FALSE;

cout << "Enter Number : ";
cin>>iValue;

bRet = Check(iValue);

if(bRet == TRUE)
{
    cout<<iValue<<" Divisible by 5";
}
else
{
    cout<<iValue<< " NOT Divisible by 5";
}

return 0;
}