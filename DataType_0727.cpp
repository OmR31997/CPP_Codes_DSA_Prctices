#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age=18;
    string name ="Krishna";
    char name_2[] = "Kanha";
    const float PI=3.14;
    char something='A';
    double price=10000.52;
    bool light=true;

    cout << "Size Of name_2: "<<sizeof(name_2)<<"\n";
    cout <<"Name: "<<name<<"\nAge: "<<age<<"\nPrice: "<<price<<"\n";
    cout <<"Is Light: "<<light<<"\n";

    cout <<"Size of Price: "<<sizeof(price)<<"\n";
    return 0;
}