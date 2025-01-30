#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
     
     iCnt = 1;
    while(iCnt<=iValue);
    {
        printf("%d ", iCnt);
        iCnt++;
    }

}
int main()
{
   int iFrequency = 0;
    
    printf("Enter the number : \n");
    scanf("%d",&iFrequency);

    Desplay(iFrequency);

    return 0;
}