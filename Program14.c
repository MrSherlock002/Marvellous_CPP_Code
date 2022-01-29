//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  Wap to explain file concepts. Learn how to display data from the file.
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Arr[10];

    fd = open("Demo.txt",O_RDWR);
    if(fd==-1)
    {
        printf("\n Unable to open the file");
    }

//////////////////////////////////////
//  0     from starting position
//  1     from current position
//  2     from end of the file.
//////////////////////////////////////

    lseek(fd,5,0);

    read(fd,Arr,5);
    printf("\n Data from file : ");
    write(1,Arr,5);
    close(fd);
    return 0;
}