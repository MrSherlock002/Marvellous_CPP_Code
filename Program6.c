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
int fd =0,iRet =0;
char Fname[30];
char Data[7];


printf("\n Enter file name : ");
scanf("%s",Fname);

fd = open(Fname,O_RDWR);

if(fd==-1)
{
printf("\n Unable to open the file");
return -1;   //Return to OS.
}
else
{d
printf("\n File successfully opened with FD : %d ",fd);
}

iRet = read(fd,Data,6);
printf("\n %d bytes gets successfully read from the file",iRet);
printf("\n Data from the file is : %s",Data);

return 0;
}

