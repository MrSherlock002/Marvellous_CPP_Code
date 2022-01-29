/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (7_3)
//  A program which accept distance in kilometer and convert it into meter.(1 Kilometer = 1000 Meter)
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


int KMtoMeter(int iValue)
{
int iSum = 0;
iSum = iValue*1000;

return iSum;
}



int main()
{
int iValue = 0;
int iRet=0;
cout<<"\n Enter Distance :";
cin>>iValue;

iRet = KMtoMeter(iValue);

printf("\n %d Kilometer = %d Meters",iValue,iRet);
return 0;
}