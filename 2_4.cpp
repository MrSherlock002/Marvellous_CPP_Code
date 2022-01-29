/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (2_4)
//  Accept two numbers from user and display first number in second number of times
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void Display (int iNo, int iFrequency)
{
    if (iFrequency<0)
    {
        iFrequency = -iFrequency;
    }
    int iCnt = 0;
    for (iCnt= 0 ; iCnt<iFrequency; iCnt++ )
    {
        cout<<iNo<<"\t";
    }

}

int main()
{
int iValue1 =0, iValue2=0;
cout << " Enter the Number 1 : ";
cin >> iValue1;

cout << " Enter the Number 2 : ";
cin >> iValue2;

Display(iValue1, iValue2);

    return 0;
}