//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  C++ Concepts
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>

using namespace std;

class Marvellous
{
    public:
    int Addition(int x, int y)
    {
        int iAns = 0;
        iAns = x+y;
        return iAns;
    }

};

int main()
{
int iNo1=0,iNo2=0,iRet=0;

Marvellous mobj;

cout<<"Enter first number : ";
cin>>iNo1;

cout<<"Enter Second number : ";
cin>>iNo2;

iRet = mobj.Addition(iNo1,iNo2);
cout<<"Addition is = "<<iRet;

return 0;
}