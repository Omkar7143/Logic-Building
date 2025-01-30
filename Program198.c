#include<stdio.h>

void Display(char *str)
{
    char *p = str;

    while(*str != '\0')
    {
        printf("%c",*str);
        str++;
    }
    
}
int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    Display(Arr);

    return 0;
}
