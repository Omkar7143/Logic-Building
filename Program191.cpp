#include<iostream>
using namespace std;

int main()

{
    int iLength = 0;
    int *Arr = NULL;            //Data (Characteristics);

    int iCnt = 0;

    cout<<"Enter number of elements that you want to store : \n";
    cin>>iLength;

    Arr = new int[iLength];             //Resource allocation ( constructor)
    //Arr = (int * )malloc(sizeof(int)* iLength);

    cout<<"Enter the values : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)           //Logic(Function)
    {
        cin>>Arr[iCnt];
    }

    cout<<"Values from the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)            //Logic (Function)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete [] Arr;                            //Resource deallocation (Destructor)
    return 0;
}