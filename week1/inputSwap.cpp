// Accept any two numbers from the user and swap the two numbers

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter any two numbers: "<<endl;
    cin>>a>>b;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<"Swapped First number: "<<a<<endl;
    cout<<"Swapped Second number: "<<b<<endl;
    return 0;
}