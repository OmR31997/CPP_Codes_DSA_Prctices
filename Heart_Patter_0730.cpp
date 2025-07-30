#include <iostream>
using namespace std;

int main()
{
    int n=3;
    
    //Upper Structure
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-2; j++)
        {
            cout <<" ";
        }
        
        for(int k=0; k<(2*(i+2))-1; k++)
        {
            cout <<"*";
        }
        
        for(int l=0; l<2*(n-i-1)-1; l++)
        {
            cout <<" ";
        }
        
        for(int j=0; j<2*(i+2)-1; j++)
        {
            cout <<"*";
        }
        cout <<"\n";
    }
    
    // Lower Portion
    for(int i=0; i<n+3; i++)
    {
        for(int j=0; j<i; j++)
        {
            cout <<" ";
        }
        
        for(int k=0; k<n-i+2; k++)
        {
            cout <<"*";
        }
        
        if(i !=0 || i!=1 )
        {
            cout <<"*";
        }
        
        for(int l=0; l<n-i+2; l++)
        {
            cout <<"*";
        }
        cout <<"\n";
    }

}