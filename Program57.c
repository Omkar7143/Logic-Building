#include<stdio.h>

int CountEvenDigits(int iNo)
{
   
   int iDigits = 0, iCount = 0;

     if(iNo < 0)   //Updator
     {
        iNo = -iNo;
     }
     
    while(iNo > 0)
{
    iDigits = iNo % 10;
    iCount++;
    iNo = iNo / 10;
}
return iCount;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d\n",&iValue);

    iRet= CountEvenDigits(iValue);
    printf("Number of digits are : %d\n",iRet);

return 0;
}


/*================================================================
count of Even digits in code*/