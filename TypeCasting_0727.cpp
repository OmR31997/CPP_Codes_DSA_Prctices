#include <iostream>
using namespace std;
 int main()
 {

    // Implicit_Case
    char something='A';
    int char_some=something;
    int price = 1000;
    float price_1 = price + 500.25;

    // Explicit_Case
    int num = 65;
    char num_1 = (char)num;
    float mrp = 10000.45;
    int mrp_1 = (int)mrp;

    cout <<"num_1: "<<num_1<<"\n";
    cout <<"price_1: "<<price_1<<"\n";
    cout <<"mrp_1: "<<mrp_1<<"\n";
    cout <<"Char Some: "<<char_some<<"\n";
    return 0;
 }