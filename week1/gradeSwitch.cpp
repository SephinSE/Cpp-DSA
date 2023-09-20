// do the grade question using a switch statement

#include <iostream>
using namespace std;

int main() {
    int percent;
    char grade;

    cout<<"Enter you percentage: ";
    cin>>percent;

    switch (percent) {
        case 90 ... 100:
            grade='A';
            break;
        case 80 ... 89:
            grade='B';
            break;
        case 70 ... 79:
            grade='C';
            break;
        case 60 ... 69:
            grade='D';
            break;
        case 50 ... 59:
            grade='E';
            break;
        case 0 ... 49:
            grade='F';
            break;
        default:
            cout<<"INVALID PERCENTAGE INPUTTED!";
            exit(0);
    }

    cout<<"Your grade is "<<grade;
    return 0;
}