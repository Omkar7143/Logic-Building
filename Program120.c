









#include<stdio.h>
void Display(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i < iRow; i++)        // outer Loop
    {
        for(j = 1; j <= iCol; j++)    //Inner Loop
        {
            printf("%d\t",i);
        }
        printf("\n");
        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the number of rows : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}