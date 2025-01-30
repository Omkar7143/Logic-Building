// Generic Programming
//  This is generic program
// Every specific program is not convert into generic

#include <iostream>
using namespace std;

float Addition(float Arr[], int iSize)
{
    float iSum = 0.0f;
    int i = 0;

    for (i = 1; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    float Brr[] = {10., 20., 30., 40.};
    float iRet = 0.0f;

    iRet = Addition(Brr, 4);

    cout << "Addition is :" << iRet << "\n";

    return 0;
}