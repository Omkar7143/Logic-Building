//Generic Programming
// The Program is known as Specific Program

#include<iostream>
using namespace std;

double AdditionD(double no1,double no2)
{
    double Ans = 0.0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
double iRet = 0.0;
iRet = AdditionD(11.7f,10.2f);

cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}