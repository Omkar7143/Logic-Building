#include<iostream>
using namespace std;

int main()

{
    int iLength = 0;
    int *Arr = NULL;

    int iCnt = 0;

    cout<<"Enter number of elements that you want to store : \n";
    cin>>iLength;

    Arr = new int[iLength];   
    //Arr = (int * )malloc(sizeof(int)* iLength);

    cout<<"Enter the values : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Values from the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete [] Arr;
    return 0;
}