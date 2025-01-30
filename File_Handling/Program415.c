#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0; // file descriptor

    fd = creat ("Marvellous.txt",0777);//octal number

    if(fd == -1)
    {
printf("unable to create file\n");
    }
    else
    {
        printf("File succesfully created\n");
    }

    return 0;
}