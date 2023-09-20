// Accept the age of 3 people by the user and determine the oldest and youngest among them

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int oldest, youngest;

    cout<<"Enter age of all 3 people: ";
    cin>>a>>b>>c;

    if (a>b && a>c) {
        oldest=a;
        if (b>c) {youngest=c;} else {youngest=b;}
    } else if (b>c && b>a) {
        oldest=b;
        if (a>c) {youngest=c;} else {youngest=a;}
    } else {
        oldest=c;
        youngest= a>b?b:a;
    }

    cout<<oldest<<" is oldest and "<<youngest<<" is youngest"<<endl;
    return 0;
}