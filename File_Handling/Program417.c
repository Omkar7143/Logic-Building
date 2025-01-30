#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0; // file descriptor
    char Name[30];

printf("Please enter the file name that you want to create \n");
scanf("%[^\n]s",Name);

    fd = creat (Name,0777);//octal number

    if(fd == -1)
    {
printf("unable to create file\n");
    }
    else
    {
        printf("File succesfully created with FD %d\n",fd);
    }

    return 0;
}