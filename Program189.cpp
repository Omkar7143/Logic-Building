#include <iostream>
using namespace std;

class Number
{
public:
    int iNo = 0;

    Number(int A)
    {
        iNo = A;
    }
};
void DisplayFactors(int iNo) // O(N\2)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            cout << iCnt << "\n";
        }
    }
}
int main()
{
    int iValue = 0;

    cout << "Enter number: \n";
    cin >> iValue;

    Number nobj(iValue);
    DisplayFactors(iValue);

    return 0;
}


// This program for company based on object oriented programming