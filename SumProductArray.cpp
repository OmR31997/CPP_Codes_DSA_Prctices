#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int product(int arr[], int size)
{
    int mult=1;
    for(int i=0; i<size; i++)
    {
        mult *= arr[i];
    }

    return mult;
}

int main()
{
    int arr[] = {26, 28, 24, 20, 10}; 
    int size = sizeof(arr)/sizeof(int);

    cout <<"Sum: "<<sum(arr, size)<<"\n";
    cout <<"Product: "<<product(arr, size)<<"\n";
    
    return 0;
}
