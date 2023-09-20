// Write a program to calculate simple interest. Answer should be in 3 decimal point

#include <iostream>
using namespace std;

int main() {
    int principal, rate, time, sInterest;
    cout<<"Welcome to Simple Interest Calculator!"<<endl;
    cout<<"Enter Principal: "<<endl;
    cin>>principal;
    cout<<"Enter Rate: "<<endl;
    cin>>rate;
    cout<<"Enter time in years: "<<endl;
    cin>>time;

    sInterest = principal*rate*time/100;

    cout<<"Simple Interest is: "<<sInterest<<endl;

    return 0;
}