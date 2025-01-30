#include<stdio.h>

void SumFactors(int iNo)
{
   int iCnt =0;
   int iSum = 0;

    printf("Addition of Factors is %d are : \n ",iNo);
    
   for(iCnt = 1; iCnt <= iNo/2; iCnt++)        // Time complexity
   {
    if (iNo % iCnt == 0)
    {
       iSum = iSum + iCnt;
    }
   }
   return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    printf("Summation of factors : %d\n",iRet);
    return 0;
}