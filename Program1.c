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
fd = creat("Marvellous.txt",0777);

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

