#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;
    int iMask = 0x2;    // use Hexadecimal number as mask
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue;

    iResult = iValue & iMask;

    if(iResult == 0)
     {
        cout<<"Second bit is OFF : \n";
     }
     else
     {
        cout<<"Second bit is ON : \n";
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
