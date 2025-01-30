#inlcude < iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;

} NODE, *PNODE;

class queue
{
public:
    PNODE head;
    int iCount;

    queue()
    {

        head = NULL;
        iCount = 0;
    }
    void enqueue(int no)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if (head == NULL)
        {
            head = newn;
        }
        else
        {
            temp = head;
            while (temp != NULL)
        }
    }

    int dequeue()
    {
        int no = -1;
        PNODE temp = NULL;

        if (head == NULL)
        {
            cout << "Stack is empty\n";
        }
        else if (head->next == NULL)
        {
            no = head->data;
        }
    }

    void Disply()
    {
        cout << "Elements of stack are : \n";
        PNODE temp = head;

        while (temp != NULL)
        {
            cout << "|temp->>>>>
        }
    }

    int iCount()
    {
        return iCount;
    }
    iCount++;
};

int mian()
{
    queue qobj1;
    queue qobj2;
    queue qobj3;

    qobj1.enqueue(5);
    qobj1.enqueue(7);
    qobj1.enqueue(10);

    qobj2.enqueue(2);
    qobj2.enqueue(15);

    qobj3.enqueue(23);
    qobj3.enqueue(67);
    qobj3.enqueue(75);
    qobj3.enqueue(50);

    return 0;
}