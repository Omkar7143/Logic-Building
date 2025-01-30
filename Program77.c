#include<stdio.h>
#include<stdlib.h>

void ---------(int Arr[],int iSize)
{

}
int main()
{
    int iLength = 0 , iCnt = 0;
    int *ptr = NULL;

    printf("Enter the nunber of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }
     
     Additon(ptr,iLength);
    free(ptr);


    return 0;
}