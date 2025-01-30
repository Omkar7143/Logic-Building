#include <iostream>
using namespace std;

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0xffffffef;
    int iResult = 0;
    iMask = iMask << (iPos - 1);
    iResult = iNo ^ iMask;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iLocation = 0;
    int iRet = 0;
 

    cout << "Enter the number : \n";
    cin>>iValue;
 

    cout << "Enter the Position : \n";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<< "Number after bit toggle :"<<iRet<<"\n";

    return 0;
}

/*                          Toggle the bit
                      0 0 0 1 1 0 0 1
                      0 0 0 0 1 0 0 1  this is 9 in decimal
                      _______________
                      0 0 0 1 1 0 0 1    iNo

*/
