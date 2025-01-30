// 5
// 1 2 3 4 5

#include<stdio.h>

void DisplayI(int iNo)
{
 static int iCnt = 0;
  

while (iCnt < iNo)
{
    printf("%d ", iCnt);
    iCnt++;
}

   
}

int main()
{
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);
    DisplayI(iValue);

    printf("End of main \n");

    return 0;
}