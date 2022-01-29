//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Wednesday (20/10/2021)
//  Wap to explain file concepts.
//
//////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
int fd =0;
char Fname[30];

printf("\n Enter file name : ");
scanf("%s",Fname);

fd = creat(Fname,0777);

if(fd==-1)
{
printf("\n Unable to create the file");
}
else
{
printf("\n File successfully created.!");
}

	return 0;
}

