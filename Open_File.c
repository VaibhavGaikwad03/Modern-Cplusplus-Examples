//Write application which accept file name and open that file in read mode.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[20];
    int fd = 0;

    printf("Enter file name to open : \n");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }

    printf("File opened succesfully with fd : %d\n", fd);

    return 0;
}