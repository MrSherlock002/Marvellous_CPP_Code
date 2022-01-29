//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (20/10/2021)
//  Wap to explain file concepts. Learn how to open the file.
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
int fd =0;
char Fname[30];

printf("\n Enter file name : ");
scanf("%s",Fname);

fd = open(Fname,O_RDWR);

if(fd==-1)
{
printf("\n Unable to open the file");
}
else
{
printf("\n File successfully opened with FD : %d ",fd);
}

return 0;
}

