// * *  * * 

#include<stdio.h>

void DisplayI()
{
    int iCnt = 0;
    iCnt = 1; 
    while( iCnt<= 4)
    {

    printf("*\n");
    iCnt++;
    }
   
}

int main()
{
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);
    DisplayI();

    return 0;
}