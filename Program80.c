#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
  int iSum = 0, iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0 , iCnt = 0, iRet = 0;
    // step1 : Accept the number of elements from user
    printf("Enter the nunber of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }
     
     iRet = Addition(ptr,iLength);
     printf("Addition is : %d\n"iRet);


    free(ptr);


    return 0;
}