#include <iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x2;
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
use mask concept to display the 2nd  nember form  binary
check 2nd bit

use Hexadecimal number
use mask concept
mask number is not same or 0000  then it is OFF
mask number is same as mask value then it is ON


*/
