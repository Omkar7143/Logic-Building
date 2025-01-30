// This program used for sequence
#include<stdio.h>
////////////////////////////////////////////////////////////////
//
//Name of Function : 
//Description      : It usde to calculate the Area of circle
//Input            : Float
//Output           : Float
//Name of Auther   : Omakr Suryakant Jadhav (051LI_Omkar)
//Date             : 12/10/2024
//
////////////////////////////////////////////////////////////////
int main()
{ 
    float fRadious = 0.0f;           //Local Variable for to store the Input 
    float fArea = 0.0f;              //Local variable for to store the Output

    printf("Enter the radious of circle\n");
    scanf("%f",&fRadious);

    fArea = 3.14 * fRadious * fRadious;         //Business Logic 
    //      3.14 * 10.5 * 10.5

    printf("Area of circle is : %f\n",fArea);  //346.185

    return 0;
}