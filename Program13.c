#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function Nmae : CalculatePercentage
//Description   : It is used to Calculate the Percentage of Students Marks 
//Input         : Integger
//Output        : Float
//Auther        : Omakr Suryaknat Jadhav(051LI_Omkar)
//Date          : 12/10/2024
//
///////////////////////////////////////////////////////////////////// 
float CalculatePercentage(int iObtained, int iTotal)       // Local variable to store the data of Parameters
{
    float fPercentage = 0.0f;     //Local variable to store the Result temporary
    fPercentage = ((float)iObtained / (float)iTotal) * 100;     //Business Logic 
    //we used widening Type casting for temporary convert  integer to float or Numeric to Decimal
    return fPercentage;
}
////////////////////////////////////////////////////////////////
//
// This  application is used to calculate the percentage of student Marks
//
////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;        //Local variable for input
    float fResult = 0.0f;                //Used to stored the output

    printf("Please enter obtained marks in your exam : \n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks in your exam : \n");
    scanf("%d", &iValue2);

    fResult = CalculatePercentage(iValue1, iValue2);        //Function call      

    printf("Your percentage is : %f\n",fResult);          //Display the output
    return 0;
}