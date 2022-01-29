//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  Wap to explain file concepts. Learn how to data overwrites in the file.
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[]="Hello";

    fd = open("Demo.txt",O_RDWR | O_APPEND);
    if(fd==-1)
    {
        printf("\n Unable to open the file");
    }
    write(fd,Arr,5);
    return 0;
}