//////////////////////////////////////////////////////////////////////////
//
//  Prasad R. Bhosale
//  Monday (25/10/2021)
//  Wap to explain file concepts. Learn how to read data from a file.
//  Count number of vowels.
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0,iCnt=0,iRet=0,i=0;
    char fname[20];
    char Buffer[10];

    printf("\n Enter file name :");
    scanf("%s",fname);

    fd = open(fname,O_RDWR);

    if(fd==-1)
    {
        printf("\n Unable to open the file.");
        return -1;
    }

    while((iRet = read(fd,Buffer,10))!=0)
    {
        for(i=0; i<iRet; i++)
        {
            if((Buffer[i]=='a')||(Buffer[i]=='e')|| (Buffer[i]=='i')||(Buffer[i]=='o') || (Buffer[i]=='u'))
            {
                iCnt++;
            }
        }
    }
    printf("Total number of vowels are : %d",iCnt);
    close(fd);
    return 0;
}