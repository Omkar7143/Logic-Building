//  4
//  4 3 2  1

#include<stdio.h>

void DisplayR(int iNo)
{

  
while (iNo >= 1)
{
    printf("%d\n ", iNo);
    iNo--;
}


   
}

int main()
{
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);
    DisplayR(iValue);

    printf("End of main \n");

    return 0;
}