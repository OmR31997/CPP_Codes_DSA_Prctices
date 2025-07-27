#include <iostream>
using namespace std;
int main()
{
    //Arithmatic (+, -, *, /, %)
    int num_1=0, num_2=0;

    cout <<"Enter First Number: ";
    cin >>num_1;

    cout <<"\nEnter Second Number: ";
    cin >>num_2;

    cout <<"\nAddition: "<<num_1+num_2<<"\n";
    cout <<"\nSubtraction: "<<num_1-num_2<<"\n";
    cout <<"\nMutiplication: "<<num_1*num_2<<"\n";
    cout <<"\nDivision: "<<num_1/num_2<<"\n";
    cout <<"\nModulo: "<<num_1%num_2<<"\n";
    
    //Relational (<, >, <=, >=, ==, !=)
    cout <<"Num_2 is bigger than Num_2: "<<(num_1<num_2)<<"\n";
    cout <<"Num_1 is bigger than Num_2: "<<(num_1>num_2)<<"\n";
    cout <<"Num_2 is bigger than or equal Num_2: "<<(num_1<=num_2)<<"\n";
    cout <<"Num_1 is bigger than or equal Num_2: "<<(num_1>=num_2)<<"\n";
    cout <<"Num_1 & Num_2 is equal: "<<(num_1==num_2)<<"\n";
    
    //Logical (AND, OR, NOT)
    cout<<"(3 > 8) && (4 > 4): "<<((3 > 8) && (4 > 4))<<"\n";
    cout<<"(3 == 3) && (4 == 4): "<<((3 == 3) && (4 == 4))<<"\n";
    cout<<"(3 > 8) || (4 > 4): "<<((3 == 3) && (4 == 4))<<"\n";
    cout<<"(3 == 3) || (4 == 4): "<<((3 == 3) || (4 == 4))<<"\n";
    cout<<"Oppesition Of True: "<<(!true)<<"\n";
    
    return 0;
}