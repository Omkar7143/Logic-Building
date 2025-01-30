#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    char Name[30];
    char Arr[10] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Please enter the file name that you want to open \n");
    scanf("%[^'\n']s", Name);

    fd = open(Name, O_RDONLY);

  while (iRet = read(fd, Arr, 10)!=  0)
  {
    write(1,Arr,iRet);
  }
  

    close(fd);

    return 0;
}

// SEEK_SET  Surwatipasun               0
// SEEK_CUR  Atta jithe aahe tithun     1
// SEEK_END  Shewatapasun               2