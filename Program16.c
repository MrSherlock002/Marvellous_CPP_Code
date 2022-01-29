//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  Wap to explain file concepts. Learn how to use (Whole()) function.
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Demo.txt",O_RDWR);
    if(fd==-1)
    {
        printf("\n Unable to open the file");
        return -1;
    }

//////////////////////////////////////
//  0     from starting position
//  1     from current position
//  2     from end of the file.
//////////////////////////////////////

    lseek(fd,10,2);

    write(fd," ",1);

   
    return 0;
}