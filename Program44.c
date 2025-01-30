#include <stdio.h>
#include <stdbool.h>

bool CheckDeivisible(int iNo) // Helper function to avoide user interaction
//iNo is integer is use because it is used to store parameters
{
    int iResult = 0;
    iResult = iNo % 3;

    if (iResult == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bFlag = false; // bFlag is used to store the false is 0 then it use

    printf("Enter number : \n");  //It use to accept the input
    scanf("%d", &iValue);

    bFlag = CheckDeivisible(iValue);
    if (bFlag == true)
    {
        printf("%d is divisible by 3\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 3\n", iValue);
    }
    return 0;
}