#include <iostream>
using namespace std;

int main()
{
    int arr_1[] = {26, 28, 24, 20, 10};
    int arr_2[] = {26, 28, 50, 66, 1};
    
    int newArr[5];
    int matchIntdex =0;
    
    int size = sizeof(arr_1)/sizeof(int);
    
    for(int i=0; i<size; i++)
    {
        if(arr_1[i]==arr_2[i])
        {
            newArr[matchIntdex] = arr_1[i];
            matchIntdex++;
        }    
    }
    
    for(int i=0; i<matchIntdex; i++)
    {
        cout <<i<<": "<<newArr[i]<<" ";  
    }

    cout <<"\n";
    return 0;
}