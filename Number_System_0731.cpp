#include <iostream>
using namespace std;

void decimatToBinary(int decimal)
{
    int result=0, rem=0, pow=1;
    while(decimal >0)
    {
        rem = decimal%2;
        decimal /= 2;
        
        result += rem*pow;
        pow *= 10;
    }
    cout <<result<<endl;
}

void binaryToDecimal(int binary)
{
    int result=0, pow=1, digitRem=0;
    
    while(binary > 0)
    {
        digitRem = binary%10;
        binary /= 10;
        
        result += pow*digitRem;
        pow *= 2;
    }
    cout <<result<<endl;
}

int main()
{
    // decimatToBinary(10);
    binaryToDecimal(1010);
    return 0;
}