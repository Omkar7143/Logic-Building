#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iSize)
{
  int iCnt = 0, iMin = 0;
  iMin = Arr[0];

  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    if (Arr[iCnt] < iMin)
    {
      iMin = Arr[iCnt];
    }
  }
  return iMin;
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
  iRet = Minimum(ptr, iLength);
  printf("Minimum is : %d\n", iRet);

  free(ptr);

  return 0;
}

/*
    Step 1 : Accept the number of elements form user
    Step 2 : Allocate that memory dynamically
    Step 3 : Accept the values and store into the dynamic memory
    Step 4 : Perform the operations (Logic)
    Step 5 : Deallocate that memory
*/

/*   
Enter the nunber of elements :
5
Enter the elements :
1

2
3
4
5
Minimum is : 1

C:\Users\Lenovo\Desktop\LB>

*/