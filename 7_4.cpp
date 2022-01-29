/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (7_4)
//  A program which accept temperature in Fahrenheit and convert it into celcius.(1 Celcius = (Fahrenheit-32)*(5/9))
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


double FhtoCs(float fTemp)
{
float fSum ;
fSum = ((fTemp-32)*5)/9;
return fSum;
}

int main()
{
float fValue = 0.0;
double dRet = 0.0;

cout<<"\n Enter temperature in Fahrenheit :";
cin>>fValue;

dRet = FhtoCs(fValue);

printf("\n %f Temperature in Fahrenheit = %f Celcius",fValue,dRet);
return 0;
}