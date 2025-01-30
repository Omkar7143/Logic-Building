//Generic Programming
// The Program is known as Specific Program

#include<iostream>
using namespace std;

template<class T>
T Addition(T no1,T no2)
{
    T Ans = 0.0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
double iRet = 0.0;
iRet = Addition(11.7f,10.2f);

cout<<"Addition is : "<<iRet<<"\n";
    return 0;
}