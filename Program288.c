

#include<stdio.h>

int strlenX(char *str)
{
    int iCount = 0;


  while(*str != '\0')
  {
    if(*str >= 'A' && *str <= 'Z')
    iCount++;
  }
    str++;
  return iCount;

}


int main()
{
     char Arr[30];
     int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);

    printf("String length: %d\n",iRet);

   

    return 0;
}