
#include <stdio.h>

void Display(int iNo) // one variable to store the Parameters value
{
    int iCnt = 0; // Local variable
    // 1-initialization  2-condition   3-desplacement
    for (iCnt = 1;       iCnt <= iNo;  iCnt++)
    {
        printf("%d\n", iCnt); // 4-Body
    }
}
int main()
{
    int iFrequecy = 0; // Local variable

    printf("Enter the frequency : \n");
    scanf("%d", &iFrequecy);

    Display(iFrequecy); // Function call

    return 0;
}