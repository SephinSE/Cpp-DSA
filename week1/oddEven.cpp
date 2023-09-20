// Write a program to check if a given number is odd or even

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    (n%2==0)?cout<<"Even":cout<<"odd";
    return 0;
}