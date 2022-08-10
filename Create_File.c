//Write application which accept file name from user and create that file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include<fcntl.h>
#include<string.h>

//4 : Read
//2 : Write
//1 : Execute

int main()
{
    char FileName[20];      
    int fd = 0;     //File descripter

    printf("Enter file name to create : \n");
    scanf("%s", FileName);

    fd = creat(FileName, 0777); //7 for 4+2+1 : Gives all permissions

    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;
    }

    printf("File created succesfully with fd : %d\n", fd);

    return 0;
}