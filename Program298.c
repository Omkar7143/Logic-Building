#include<stdio.h>
#include<stdlib.h> //for malloc calloc 

struct node 
{
    int data;
    struct node *next; // pointer
};

int main()
{
    struct node *first = NULL;

   struct node obj1;
   struct node obj2;
   struct node obj3;

  obj1.data = 11;
  obj2.data = 21;
  obj3.data = 51;

  obj1.next = &obj2;     // way
  obj2.next = &obj3;     // way
  obj3.next = NULL;     // way

  first = &obj1;

   
   

    return 0;
}