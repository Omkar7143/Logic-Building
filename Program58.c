#include<stdio.h>

int CountOddDigits(int iNo)
{
   
   int iDigits = 0, iCount = 0;

     if(iNo < 0)   //Updator
     {
        iNo = -iNo;
     }

    //  if(iNo !=0)
    //  {
    //     iNo = iNo + 1;
    //  }
     
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

    iRet= CountOddDigits(iValue);
    printf("Number of OddDigits are : %d\n",iRet);

return 0;
}


/*================================================================
count of  Odd digits in code*/