#include<stdio.h>
////////////////////////////////
//
//Nmae of Function : CircleArea
//Description      : This application used to calculate the area of cicle
//Input            : Float 
//Output           : Float
//Name of Auther   : Omkar Suryakant Jadhav (051LI_Omkar)
//Date             : 12/10/2024
//
////////////////////////////////
float CircleArea(float fRadius)
{
    float fArea = 0.0f;
    fArea = 3.14f * fRadius * fRadius;
    return fArea;
}
////////////////////////////////
//
// This application is used to Calculate the Area of Circle
//
//////////////////////////////// 
int main()
{
    float fValue = 0.0f;    //Local variables with 4 memory size for taking input 
    float fResult = 0.0f;    //Local variables with 4 memory size for holding output

    printf("Enter the radious of circle : \n");
    scanf("%f", &fValue);

    fResult = CircleArea(fValue);         //function call

    pritnf("Area of circle is : %f\n",fResult);
    return 0;
}