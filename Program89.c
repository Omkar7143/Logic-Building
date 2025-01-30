#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iFrequency = 0;
    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 10)
        {
            iFrequency++;
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter the nunber of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength);
    pritnf("Frequency of 10 is : %d\n", iRet);
    free(ptr);
    return 0;
}

/*12 ,10 11 50 21 80 43*/