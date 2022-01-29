/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Saturday (09/10/2021) (3_2)
//  wap a program which accept one number from the user and print even factors of that number
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

void Display_Factors(int iNo)
{
int i = 0;
if (iNo <= 0)
{
    if(iNo<0)
        {
            iNo = -iNo;
        }
}
    for (i=1; i<=iNo/2; i++)
        {
        if(i<2 || i%2==0 && iNo%i==0)
        //if(iNo%i==0)
            {
                cout<<"\t"<<i;
            }
        }   
}

int main()
{
int iValue = 0;
cout<<"\n Enter Even Value : ";
cin>>iValue;

Display_Factors(iValue);
    return 0;
}