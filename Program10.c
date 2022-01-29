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
int fdsrc=0,fddest=0,iRet =0;
char Fname1[30];
char Fname2[30];

char Buffer[1024];  		//Bath_Mug


printf("\n Enter source file name : ");
scanf("%s",Fname1);

fdsrc = open(Fname1,O_RDONLY);



if(fdsrc==-1)
{
printf("\n Unable to open the file");
return -1; 			  //Return to OS.
}
else
{
printf("\n File successfully opened with FD : %d \n",fdsrc);
}

printf("\n Enter Destination file name : ");
scanf("%s",Fname2);

fddest = creat(Fname2,0777);

while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
{
	write(fddest,Buffer,iRet);
}

//write(fddest,Buffer,iRet);

close(fddest);

return 0;
}

