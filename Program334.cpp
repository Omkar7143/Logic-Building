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
    int iCount;

    SinglyLL()
    {
        head = NULL;
        iCount = 0;
    }

    void InsideFirst(int no) // Behaviour
    {
        PNODE newn = NULL;

        newn = new NODE; // newn = (PNODE)malloc(sizeof(NODE))
        newn->data = no;
        newn->next = NULL;

        if(head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head = newn;
        }
        iCount++;
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
    int iRet = 0;

sobj.InsideFirst(51);
sobj.InsideFirst(21);
sobj.InsideFirst(11);

iRet = sobj.Count();

cout<<"Number of elements: "<<iRet<<endl;
    return 0;
}