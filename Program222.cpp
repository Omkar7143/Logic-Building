#include <iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask = 0x10;
    int iResult = 0;
    iResult= iNo^iMask;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iMask = 0x10;
    int iRet = 0;
 

    cout << "Enter the number : \n";
    cin>>iValue;

    iRet = ToggleBit(iValue ^ iMask);

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
