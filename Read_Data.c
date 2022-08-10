//Write application which accept file name from user and read all the data from that file and display contents on screen.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

int main()
{
    char FileName[20];     
    char Data[100]; 
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

    iRet = read(fd, Data, 10);

    printf("Data from file is : \n");

    write(1, Data, iRet);

    //0 STDIN : Keyboard
    //1 STDOUT : Console
    //2 STDERR : For Error

    return 0;
}