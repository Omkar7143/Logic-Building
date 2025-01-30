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

  printf("%d\n", first->data);                //11
  printf("%d\n", first->next->data);          //21
  printf("%d\n", first->next->next->data);    //51

   
   

    return 0;
}