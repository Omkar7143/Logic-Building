/*
Step1  : understand the problem statement

Step2  : write the algorithm

Step3  : Decide the programming language

Step4  : write the program

Step5  : Test the Program
*/


/*
  problem statement:
  write a program which is used to perform ADDITION of two numbers.

*/


/*
Step1 : Understand the problem statement
user id going to enter the data in decimal format.
If entered data is negative we have to convert it to positive value.
*/


/*
Step2 : write the algorithm

START 
     Accept first input
     Accept second input
     If any of the input is negative then convert it into positive
     Perform the addition of that accepted values
     Display the Additio

STOP
*/

/*
Step3 : Decide the programming language
According to the problem statement we select C Programming
*/

/* 
Step4 : write the  Program
*/

#include<stdio.h>

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;

    printf ("Enter first number : \n");
    scanf("%f",&fNo1);

    printf ("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns = fNo1 + fNo2;
     
     printf("Addition is : %f\n",fAns);



    return 0;
}


