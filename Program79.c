#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0;
    // step1 : Accept the number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d", &iLength);
    // step2 : Allocate that memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    // step3 : Accept the values and store into the dynamic memory
    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    // step4 : Perform the operations (Logic)
    // Function call

    // Step5 : Deallocate that memory
    free(ptr);

    return 0;
}

/*----------------------------------------------------------------
step1 : Accept the number of elements from user
step2 : Allocate that memory dynamically
step3 : Accept the values and store into the dynamic memory
step4 : Perform the operations (Logic)
Step5 : Deallocate that memory
*/