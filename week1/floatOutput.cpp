// Accept two floating-point values from the user and multiply it. Answer should be in 3 decimal point

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cout<<"Enter two floats: "<<endl;
    cin>>a>>b;
    cout<<"The product is: "<<fixed<<setprecision(3)<<a*b<<endl;
    return 0;
}