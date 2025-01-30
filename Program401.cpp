// Generic Programming
//  This is generic program
// Every specific program is not convert into generic

#include <iostream>
using namespace std;

template<class T>
T Addition(T Arr[], double iSize)
{
    T iSum ;
    int i = 0;

    for (i = 1; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    double Brr[] = {10.8, 20.4, 30.9, 40.5};
    double iRet = 0.0;

    iRet = Addition(Brr, 4);

    cout << "Addition is :" << iRet << "\n";

    return 0;
}