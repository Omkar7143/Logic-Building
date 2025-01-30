#include<stdio.h>
#include<stdlib.h> //for malloc calloc 

#pragma pack(1)
struct node 
{
    int data;         //  4
    struct node *next; // pointer   8  /  4

};

int main()
{
   struct node obj;

   printf("Size of node is : %d\n", sizeof(obj));
   
   

    return 0;
}