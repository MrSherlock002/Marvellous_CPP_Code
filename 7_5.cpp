/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (7_5)
//  A program which accept area in square and convert it into square meter. (1 square feet=0.0929 square meter)
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


double SquareMeter(float fValue)
{
float fSum;
fSum = fValue*0.0929;

return fSum;
}

int main()
{
int iValue = 0;
double dRet = 0;

cout<<"\n Enter area in square feet : ";
cin>>iValue;

dRet = SquareMeter(iValue);

printf("\n %d Square Feet = %f Square meter",iValue,dRet);
return 0;
}