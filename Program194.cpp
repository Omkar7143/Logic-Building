#include <iostream>
using namespace std;

class Array
{

public:
    int *Arr;
    int iSize;

    Array(int A)
    {
        iSize = A;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }
    void Accept()
    {
        int iCnt = 0;
        cout << "Enter the values : \n";
        for (iCnt = 0; iCnt < iSize; iCnt++) 
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        int iCnt = 0;
        cout << "Values from the array are : \n";
        for (iCnt = 0; iCnt < iSize; iCnt++) 
        {
            cout << Arr[iCnt] << "\n";
        }
    }

    void RDisplay()
    {
        int iCnt = 0;
        cout << "Values from the array are : \n";
        for (iCnt = iSize; iCnt> 0; iCnt--) 
        {
            cout << Arr[iCnt] << "\n";
        }
    }

    int CountEven()
    {
        int iCnt = 0, iCount = 0;
        for(iCnt = 1; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt]%2 == 0)
             {
                iCount++;
             }
        }
    }
};
 int main()
{
    int iLength = 0, iRet = 0;
    

    cout << "Enter number of elements that you want to store : \n";
    cin >> iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();
    aobj.RDisplay();

    iRet = aobj.CountEven();
    cout<<"Number of elements are : \n";

    return 0;
}

/*  
reverce array of elements
*/