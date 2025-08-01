#include <iostream>
using namespace std;


void change_some(int& num_1)
{
    num_1 = num_1 + 28;
}

void change_arr(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        arr[i] = arr[i]*2;
    }
}

int main()
{
    int num_1 = 26;

    int og_arr[] = {26, 28, 24, 20, 10};

    // Primitive Case
    // cout <<"Before Change: "<<num_1<<endl;
    // cout <<"At Chage: "<<change_some(num_1)<<endl;
    // cout <<"After Change: "<<num_1<<endl;
    
    //AddressPassing
    // change_some(num_1);
    // cout <<"After Change: "<<num_1<<endl;

    // Non-Primitive Case
    
    int size = sizeof(og_arr)/sizeof(int);

    cout <<"Before Changes: "<<"\n";
    for(int i=0; i<size; i++)
    {
        cout <<i<<": "<<og_arr[i]<<"\n";
    }

    change_arr(og_arr, size);
    cout <<"After Changes: "<<"\n";
    for(int i=0; i<size; i++)
    {
        cout <<i<<": "<<og_arr[i]<<"\n";
    }
    return 0;
}
