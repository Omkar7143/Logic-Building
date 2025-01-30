/*
START
     Accept the percentage from user
     If percentage are less than 40 then diplay FAIL
     And If it is greater than or equal to 40 then display PASS
STOP
*/

#include <stdio.h>

void DisplayResult(float fPercentage)
{
    if (fPercentage > 100.0f) // Filter
    {
        printf("Invalid percentage. Please enter the value in the range 0 to 100");
    } // without writing "return;"

    if (fPercentage >= 40.00f)
    {
        printf("You are PASS \n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage : \n");
    scanf("%f", &fValue);

    DisplayResult(fValue);
    return 0;
}
