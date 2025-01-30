// Generic Programming
//  This is generic program
// Every specific program is not convert into generic

#include <iostream>
using namespace std;

class Array
{

public:
    float *Arr;
    float iSize;

    Array(int length);

    ~Array();

    void Accept();

    void Display();

    float Addition();
};

Array :: Array(int iLength)
{
    iSize = iLength;
    Arr = new float[iSize];
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
float Array::Addition()
{
    float fSum = 0.0f;
    int i = 0;
    for (int i = 0; i < iSize; i++)
    {
        fSum = fSum + Arr[i];
    }
    return fSum;
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