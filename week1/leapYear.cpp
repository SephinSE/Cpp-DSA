// Write a program to find if a given year is a leap year or not

#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter the year to check: "<<endl;
    cin>>year;

    if (year%4==0 && year%100!=0) {
        cout<<year<<" is a leap year!"<<endl;
    } else if (year%400==0) { // just simply OR this statement with previous if condition
        cout<<year<<" is a leap year!"<<endl;
    } else {
        cout<<year<<" is a not leap year."<<endl;
    }
    return 0;
}