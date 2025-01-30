#include<stdio.h>
/////////////////////////////////////////////////////////////////////
//
//Function Nmae : DisplayTimeTable
//Description   : It is used to show the time of student exam 
//Input         : Integger
//Output        : Integger
//Auther        : Omakr Suryaknat Jadhav(051LI_Omkar)
//Date          : 12/10/2024
//
///////////////////////////////////////////////////////////////////// 
void DisplayTimeTable(int iStd)
{
    if(iStd == 8)
    {
     printf("Your Exam at :09.30 AM\n");
    }
   else if(iStd ==9)
{
    printf("Your Exam at : 10.30 AM\n");
}
   else if(iStd ==10)
{
    printf("Your Exam at : 11.30 AM\n");
}
else 
{
    printf("Sorry we dont have the information about your standard\n"); 
     //This comment is used for the defautlt input taken other than the above value
}
}
 ////////////////////////////////////////////////////////////////
//
// This  application is used to show the Time of student Exam
//
////////////////////////////////////////////////////////////////
int main()
{

    int iValue = 0;              // Local variable for input

    printf("Please enter your standard : \n");
    scanf ("%d",&iValue);

    DisplayTimeTable(iValue);     // Function call

    return 0;
}