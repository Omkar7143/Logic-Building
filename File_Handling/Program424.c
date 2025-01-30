#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd = 0; // file descriptor
    char Name[30];
    int iRet = 0;

    printf("Please enter the file name that you want to open \n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with FD %d\n", fd);
        
        iRet = write(fd, "Hello World",10);
        printf("%d bytes gets successfull written into the file\n",iRet);
        close(fd);
    }

    return 0;
}