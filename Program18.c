/*
START
     Accept the percentage from user
     If percentage are less than 40 then diplay FAIL
     And If it is greater than or equal to 40 then display PASS
STOP
*/

#include <stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function Nmae : DisplayResult
//Description   : It is used to show the Exam result where student is PASS OR FAIL
//Input         : Float
//Output        : Float
//Auther        : Omakr Suryaknat Jadhav(051LI_Omkar)
//Date          : 12/10/2024
//
///////////////////////////////////////////////////////////////////// 
void DisplayResult(float fPercentage)
{
    if (fPercentage < 0.0f || fPercentage > 100.0f)    // Filter    ||Logical or operator
    {
        printf("Invalid percentage. Please enter the value in the range 0 to 100");
        // This statement we used when the user entered invalid input
        return; // return is not initialezed, it depends on the conditions 
    }

    if (fPercentage >= 40.00f)
    {
        printf("You are PASS \n");
    }
    else
    {
        printf("You are FAIL\n");
    }
}
////////////////////////////////////////////////////////////////
//
// This  application is used to show the Result of student 
//
////////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0f;          //Local variable

    printf("Enter the percentage : \n");
    scanf("%f", &fValue);

    DisplayResult(fValue);       //Function call
    return 0;
}
