// Accept two values from the user and print the greatest among them

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    a>b?cout<<a<<" is greater!":cout<<b<<" is greater!";
    return 0;
}