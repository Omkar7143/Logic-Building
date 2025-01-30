/*
8   9.30
9   10.30
10   11.30
*/

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
 switch(iStd)
 {
    case 8:
    printf("Your exam is at 9.30 AM\n");
    break;

    case 9:
    printf("Your exam is at 10.30 AM\n");
    break;

    case 10:
    printf("Your exam is at 11.30 AM\n");
    break;

    default:
    {
        printf("Sorry we dont have the information about your standard\n");
        break;
    }
    
 }
}
////////////////////////////////////////////////////////////////
//
// This  application is used to show the Time of student Exam
//
////////////////////////////////////////////////////////////////

int main()
{

    int iValue = 0;                   // Local variable for input

    printf("Please enter your standard : \n");
    scanf ("%d",&iValue);

    DisplayTimeTable(iValue);        //Function call

    return 0;
}