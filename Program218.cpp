#include <iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0xe0000;
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
        cout << "14,15,16 bits is ON : \n";
    }
    else
    {
        cout << "14,15,16 bit is OFF : \n";
    }

    return 0;
}

/*
0000 0000 0000 0000 0000 1110 0000 0000 0000 
  0    0    0    0   0    14     0   0    0
  0    0    0    0   0     e     0   0    0

0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
0 1 2 3 4 5 6 7 8 9 a  b  c  d   e  f
*/
