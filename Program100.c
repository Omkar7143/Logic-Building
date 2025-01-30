// Input : 5
// 1    *   2   *   3   *   4   *   5   *

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt >= 1; iCnt--)
  {
    printf("%d\t*\t");
  }

  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Esnter number : %d\n");
  scanf("%d", iValue);

  Display(iValue);

  return 0;
}