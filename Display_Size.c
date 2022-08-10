//Write application which accept file name from user and display size of file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[20];     
    char Data[1024]; 
    int fd = 0;     //File descripter
    int iRet = 0;

    printf("Enter file name to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    iRet = read(fd, Data, sizeof(Data));

    printf("File size is %d bytes\n", iRet);

    return 0;
}