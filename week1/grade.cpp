// Write a program to show the grade obtained by a student after he/she enters their total mark percentage

#include <iostream>
using namespace std;

int main() {
    int percent;
    char grade;

    cout<<"Enter you percentage: ";
    cin>>percent;

    if (percent>=90) {
        grade='A';
    } else if (percent<90 && percent>=80) {
        grade='B';
    } else if (percent<80 && percent>=70) {
        grade='C';
    } else if (percent<70 && percent>=60) {
        grade='D';
    } else if (percent<60 && percent>=50) {
        grade='E';
    } else if (percent<50) {
        grade='F';
    }

    cout<<"Your grade is "<<grade;
    return 0;
}