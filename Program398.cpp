// Generic Programming
//  This is generic program
// Every specific program is not convert into generic

#include <iostream>
using namespace std;

int Addition(int Arr[], int iSize)
{
    int iSum = 0;
    int i = 0;

    for (i = 1; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int Brr[] = {10, 20, 30, 40};
    int iRet = 0;

    iRet = Addition(Brr, 4);

    cout << "Addition is :" << iRet << "\n";

    return 0;
}