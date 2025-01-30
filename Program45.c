#include <stdio.h>
#include <stdbool.h>

bool CheckDeivisible(int iNo) // Helper function to avoide user interaction
//iNo is integer is use because it is used to store parameters
{
    
    if (((iNo % 3 == 0)) && ((iNo % 5)==0))
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bFlag = CheckDeivisible(iValue);
    if (bFlag == true)
    {
        printf("%d is divisible by 3,5\n", iValue);
    }
    else
    {
        printf("%d is not divisible by 3,5\n", iValue);
    }
    return 0;
}