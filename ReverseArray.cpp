#include <iostream>
using namespace std;

int main()
{
    int arr[] = {26, 28, 24, 20, 10}; //need: 10, 20, 24, 28, 26
    int size = sizeof(arr)/sizeof(int);

    int start=0, end = size-1;

    for(int i=0; i<size; i++)
    {
        cout <<arr[i]<<" ";
    }

    cout <<"\n";
    cout <<"After Reverse: -"<<"\n";

    while(start < end)
    {
        //Manual Way
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        //Using swap function
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++)
    {
        cout <<arr[i]<<" ";
    }

    cout <<"\n";
    return 0;
}