#include<iostream>
using namespace std;

void DisplayFactors(int iNo)          // O(N\2)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo/2; iCnt++)    
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter number: \n";
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}

/*   
  problems on Numbers 
  problems on Digits
  problems on N Numbers 
  problems on Pattern printing
  problems on 


*/