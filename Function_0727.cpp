#include <iostream>
#include <string.h>
using namespace std;

//Sum Natural
int sum(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    return sum;
}

//Sum Facto
int factorial(int n)
{
    int fact = 1;
    
    for(int i=1; i<=n; i++)
    {
        fact *= i;
    }
    return fact;
}

int sumDigit(int num)
{
    int digitSum=0;
    
    while(num > 0)
    {
        int lastDigit = num%10;
        // digitSum += num%10;
        num /= 10;
        
        digitSum += lastDigit;
    }
    return digitSum;
}

int nCrBinamo(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nMr = factorial(n-r);
    
    return fact_n/(fact_r*fact_nMr);
}

//Print Prime Series to nTimes
void printPrime(int nTimes)
{
    
    for(int i=2; i<=nTimes; i++)
    {
        bool isPrime = true;
        
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime)
        {
            cout <<i<<' ';
        }
    }
}

//Check Prime
string checkPrime(int num) 
{
    bool isPrime = true;
    
    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            isPrime=false;
        }
    }
    
    if(isPrime)
    {
        return " is ";
    }
    else
    {
        return " is not ";
    }
}

void printFibonacci(int nTimes)
{
    int first = 0; 
    int second = 1;

    if(nTimes <= 0)
    {
        return;
    }

    cout <<first<<' '<<second<<' ';
    for(int i=0;i<nTimes-2; i++)
    {
        int result = first + second;
        cout << result<<' ';
        first = second;
        second = result;
    }
    cout<<'\n';
}

int main()
{

        //Sum of Natural Function 
    // cout <<"Sum: "<<sum(10)<<endl;
    // cout <<"Sum: "<<sum(5)<<endl;
    
    //Sum of Factorial  
    // cout <<"Sum: "<<factorial(5);
    // cout <<"Sum: "<<factorial(4);
    
    //Sum of Digit
    // cout <<"Sum: "<<sumDigit(2356)<<endl;
    
    //binomial coefficient
    // int n=8, r=2;
    // cout <<"nCr Binomial Coefficient: "<<nCrBinamo(n, r)<<endl;

    // int num = 20;
    // cout << num << checkPrime(11) << "prime."<<endl; 
    // printPrime(20);

    // printFibonacci(2);
    return 0;
}