#include <stdio.h>

void Display(int *ptr, int iSize) // pointer which holdes the addres & *ptr is holds the values
{
    int iCnt = 0;
    printf("Values of the array are : \n");

    for (iCnt = 0; iCnt < iSize; iCnt++) 
    {
        printf("%d\n", *ptr);
        ptr++;
    }
}

int main()
{
    int Arr[6];
    int iCnt = 0;

    printf("Please enter the values : \n");
    //    1       2       3
    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d", &Arr[iCnt]); // 4
    }

    Display(Arr, 6); // Display(100);

    return 0;
}