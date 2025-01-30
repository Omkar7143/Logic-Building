#include <iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x10000;
    int iResult = 0;
    iResult = iNo & iMask;

    if (iResult == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter the number : \n";
    cin >> iValue;

    bRet = CheckBit(iValue);

    if (bRet == true)
    {
        cout << "Second bit is ON : \n";
    }
    else
    {
        cout << "Second bit is OFF : \n";
    }

    return 0;
}

/*
0000 0000 0000 0001 0000 0000 0000 0000 0000 
  0    0    0    1   0    0     0   0
  = 10000
17 bit is
*/
