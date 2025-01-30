// * *  * * 

#include<stdio.h>

void DisplayR()
{
    // Every Local Variable has by Default have Auto Storage Class
    // Local Variable la memory Stack Section vr Bhetate
    // Ex. Chaha ch udahran

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
    DisplayR();

    return 0;
}