#include<stdio.h>

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

}
 

int main()
{

    int iValue = 0;

    printf("Please enter your standard : \n");
    scanf ("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0;
}