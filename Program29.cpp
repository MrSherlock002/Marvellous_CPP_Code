//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  Library development.
//
//////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


using namespace std;

class MarvellousFile
{
    public:
    char Fname[30];
    int fd;
    MarvellousFile(char * Name)  //Constructor
    {
        strcpy(Fname,Name);
        fd = open(Fname,O_RDWR);
    }
    ~MarvellousFile()       //Destructor
    {
        close(fd);
    }

    void Display()
    {
        int iRet = 0;
        char Buffer[1024];
        lseek(fd,0,0);

        cout<<"Data from file is :";
        while(iRet=read(fd,Buffer,1024)!=0)
        {
            write(1,Buffer,iRet);
        }
    }



};

int main()
{
char Name[30];
int iRet=0;

cout<<"Enter file name :";
cin>>Name;

MarvellousFile obj(Name);

obj.Display();
cout<<"\n";

// iRet =obj.CountCapital();
// cout<<"Capital letters are :"<<iRet<<"\n";

// iRet =obj.CountSmall();
// cout<<"Small letters are :"<<iRet<<"\n";

// iRet =obj.CountDigit();
// cout<<"Digits are :"<<iRet<<"\n";


return 0;
}