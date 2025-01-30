// * *  * * 

#include<stdio.h>

void DisplayR()
{

    //Game change zala
    static int  iCnt = 1;         //  Static Storage Class , Local Variable . 
    if( iCnt<= 4)
    {
    printf("*\n");
    iCnt++;
    DisplayR();      //Recursive Calll

    }
   
}

int main()

{
    printf("Inside main \n");
       DisplayR();
    printf("End of main \n");


    return 0;
}