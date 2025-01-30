#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//Function Name :Addition
//Description :  It is used to perform addition of 2 float values 
//Input :        Float , Float
//Output :       Float
//Auther :       Omakr Suryakant Jadhav (MC0092)
//Date :         06/10/2024 -> update date
//
////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
    //UPDATOR
float fAdd = 0.0f;                            // Local variable for result

if(fValue1 < 0.0f)
{
    fValue1 = -fValue1;
}

if(fValue2 < 0.0f)
{
    fValue2 = -fValue2;
}

fAdd = fValue1 + fValue2 ;                    // Business Logic
return fAdd;
}

////////////////////////////////////////////////////////////////
//
// This application is used to perform additon of 2 numbers
//
////////////////////////////////////////////////////////////////
int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f, fAns = 0.0f;             // Local variables for input

    printf ("Enter first number : \n");
    scanf("%f",&fNo1);

    printf ("Enter second number : \n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1 , fNo2);                            // Function call
     
     printf("Addition is : %f\n",fAns);

    return 0;
}


/*
Step5 : TEST THE PROGRAM

C:\Users\Lenovo\Desktop\LB>gcc Program10.c -o Myexe

TEST CASE 1
C:\Users\Lenovo\Desktop\LB>.\Myexe
Enter first number :
10.0
Enter second number :
20.0
Addition is : 30.000000

TEST CASE 2
C:\Users\Lenovo\Desktop\LB>.\Myexe
Enter first number :
-10.0
Enter second number :
20.0
Addition is : 30.000000

TEST CASE 3
C:\Users\Lenovo\Desktop\LB>.\Myexe
Enter first number :
10.0
Enter second number :
-20.0
Addition is : 30.000000

TEST CASE 4
C:\Users\Lenovo\Desktop\LB>.\Myexe
Enter first number :
-10.0
Enter second number :
-20.0
Addition is : 30.000000

*/

 

