#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

class SinglyLL
{
public:
    PNODE head; // cahracterstics
    int iCount ;

    SinglyLL()
    {
        head = NULL;
        iCount= 0;
    }

    void InsideFirst(int no) // Behaviour
    {
    }
    void InsideLast(int no) // Behaviour
    {
    }
    void InsidAtPos(int no, int ipos) // Behaviour
    {
    }
    void DeleteFirst() // Behaviour
    {
    }
    void DeleteLast() // Behaviour
    {
    }
    void DeeletAtPos(int ipos) // Behaviour
    {
    }
    void Display() // Behaviour
    {
    }
    int Count() // Behaviour
    {
        return iCount;
    }
};

int main()
{
    SinglyLL sobj;

    

    return 0;
}