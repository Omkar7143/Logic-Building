#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define FILESIZE 1024
int main()
{
    char Name[30];
    char Arr[FILESIZE] = {'\0'};
    int iRet = 0;
    int iSum= 0;
    int fd = 0;

    printf("Please enter the file name that you want to open \n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

    printf("Data from file is : \n");

  while ((iRet = read(fd, Arr, FILESIZE))!=  0)
  {
    iSum = iSum + iRet;
  }
  printf("\n");

    close(fd);

    return 0;
}

// SEEK_SET  Surwatipasun               0
// SEEK_CUR  Atta jithe aahe tithun     1
// SEEK_END  Shewatapasun               2