#include<stdio.h>
#include<stdlib.h> //for malloc calloc 

struct node 
{
    int data;
    struct node *next; // pointer
};

int main()
{
   struct node obj;
   struct node *ptr = &obj;

  obj.data = 11;
  ptr->data= 11;

  obj.next =NULL;     // way
  ptr->next = NULL;  // direct 

  printf("Value is : %d\n", obj.data);
  printf("Value is : %d\n", obj.data);
   
   

    return 0;
}