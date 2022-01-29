/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (2_5)
//  Accept number from the user and check whether number is even or odd.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEvent( int iNo)
{
    if (iNo%2 == 0)
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
    int iValue=0;
    BOOL bRet = FALSE;

    cout<<"Enter Number : ";
    cin>>iValue;

    bRet = ChkEvent(iValue);

    if(bRet == TRUE)
    {
        cout<<"Given number is Even ";
    }
    else
    {
        cout<<"Given number is Odd";
    }
    return 0;
}