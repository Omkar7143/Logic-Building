// Generic Programming
//  This is generic program
// Every specific program is not convert into generic

#include <iostream>
using namespace std;

class Array
{

public:
    int *Arr;
    int iSize;

    Array();

    ~Array();

    void Accept();

    void Display();

    int Addition();
};

Array :: Array(int iLength)
{
    iSize = iLength;
    Arr = new int[iSize];
}

Array ::~Array()
{
    delete[] Arr;
}

void Array ::Accept()
{
    int i = 0;
    cout << "Please enter the values : \n";
    for (i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void Array ::Display()
{
    int i = 0;
    cout << "Please enter the values : \n";
    for (i = 0; i < iSize; i++)
    {
        cout << Arr[i] << "\n";
    }
}
int Array::Addition()
{
    int iSum = 0;
    int i = 0;
    for (int i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    Array aobj(5);
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout << "Addition is :" << iRet << "\n";

    return 0;
}