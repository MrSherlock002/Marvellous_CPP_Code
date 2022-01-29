//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (20/10/2021)
//  Wap to explain file concepts. Learn how to write the file.
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
char Buffer[10];  		//Bath_Mug


printf("\n Enter file name : ");
scanf("%s",Fname);

fd = open(Fname,O_RDONLY);

if(fd==-1)
{
printf("\n Unable to open the file");
return -1; 			  //Return to OS.
}
else
{
printf("\n File successfully opened with FD : %d \n",fd);
}

printf("\n Data from file is : ");

while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
{
	write(1,Buffer,iRet);
}

close(fd);

return 0;
}

