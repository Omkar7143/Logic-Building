#include<iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}
int main()
{
    int iNo1 = 10, iNo2 =11, iAns = 0;


    cout<<Enter first number : "\n";
    cin<<iNo1;

    cout<<Enter second number : "\n";
    cin<<iNo1;

    iAns = Addition(iNo1, iNo2);
    cout<<"Addition is ";
    cin<<iNo1;

    return 0;
}