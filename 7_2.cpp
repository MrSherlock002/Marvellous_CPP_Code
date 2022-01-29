/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (7_2)
//  A program which accept width and height of rectangle from user and calculate its area.(Area = Width * Height)
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


float RectArea(float fValue1,float fValue2)
{
float fSum;

fSum = fValue1*fValue2;
return fSum;
}


int main()
{
float fValue1 = 0.0,fValue2 = 0.0;
double dRet=0.0;
cout<<"\n Enter height :";
cin>>fValue1;

cout<<"\n Enter Width :";
cin>>fValue2;

dRet = RectArea(fValue1,fValue2);

printf("\n Area of rectangle having %.2f Height and %.2f Width= %.2f",fValue1,fValue2,dRet);
return 0;
}