#include <iostream>
using namespace std;

int ToggleBit(int iNo, int iPos)
{
    int iMask = 0x10;
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

/*                          Tpggle the bit
 int iNo = 25; binary 0 0 0 1 1 0 0 1
                      0 0 0 0 1 0 0 1  this is 9 in decimal
                      
                      0 0 0 1 1 0 0 1    iNo
                      0 0 0 1 0 0 0 0  iMask
                      ________________ 
                      0 0 0 0 1 0 0 1    iResult
                      

                      0 0 0 0 1 0 0 1    iNo
                      0 0 0 1 0 0 0 0  iMask    Mask XOR 
                      ________________ 
                      0 0 0 0 1 0 0 1    iResult
*/
