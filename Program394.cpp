//Generic Programming
// The Program is known as Specific Program

#include<iostream>
using namespace std;

float AdditionF(float no1,float no2)
{
    float Ans = 0.0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
float iRet = 0.0;
iRet = AdditionF(11.7f,10.2f);

cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}