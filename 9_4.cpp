/////////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Sunday (10/10/2021) (9_4)
//  Accept number from user and display below pattern.
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;


void Display(int iNo)
{

int static i,j;
//printf("\t#");
cout<<"\t #";

for (i =1; i<=iNo;i++)
{

	//printf("\t%d",i);
    cout<<"\t"<<i;
	if(i!=iNo)
	{
	//printf("\t*\t#");
    cout<<"\t*\t#";
	}

}
//printf("\t*");
cout<<"\t*";
}


int main()
{
int static iValue;
cout<<"\n Enter No : ";
cin>>iValue;

Display(iValue);


return 0;
}
