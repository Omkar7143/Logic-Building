#include<stdio.h>

void CheckPerfect(int iNo)
{
   int iCnt =0,int iSum = 0;

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
    int iValue = 0, 
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

bRet = CheckPerfect(iValue)
if (bRet == true)
{
    printf("%d is a perfect number\n", iValue);

}
else{
    printf("%d is not a perfect number\n", iValue);
}

return 0;
}
    