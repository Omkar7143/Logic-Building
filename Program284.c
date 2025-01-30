

#include<stdio.h>

int  CountEvenDigitsI(int iNo)
{
   
    int iCount = 0;
    int iDigit = 0;


    while( iNo != 0)

    {

       iDigit = iNo % 10;
       if(iDigit % 2 == 0)
       {
        iCount++;
       }
       iNo = iNo / 10;
     
       
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

   iRet =  CountEvenDigitsI(iValue);

    printf("Number of digits are :  %d\n",iRet);

    return 0;
}