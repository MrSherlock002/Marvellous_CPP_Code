/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (6_5)
//  A program which accept radius from user and calculate its area. Consider value of pi as 3.14 (Area = PI *RADIUS*RADIUS)  
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


double CircleArea(float fRadius)
{
float fSum;
fSum =fRadius * fRadius * 3.14; 

return fSum;
}


int main()
{

float fValue = 0.0;
double dRet=0.0;
cout<<"\n Enter radius :";
cin>>fValue;

dRet = CircleArea(fValue);


cout<<"\n Area of "<<fValue<<" radius = "<<dRet; 
return 0;
}