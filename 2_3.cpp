/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (2_3)
//  Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void Display (int iNo)
{
if (iNo < 10 )
    {
        cout<<" Hello ";
    }
    else 
    {
        cout<<" Demo ";
    }

}

int main()
{
int iValue =0;
cout << " Enter the Number : ";
cin >> iValue;

Display(iValue);

    return 0;
}