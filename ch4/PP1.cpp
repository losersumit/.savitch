/* The length of the hypotenuse of a right-angled triangle is the square root
of the sum of the squares of the other two sides. Write a function calcH
that accept two doubles as function arguments and returns a double.
Prompt the user for the length of base and the perpendicular side of
the triangle. Use the pow and sqrt functions from cmath to perform the
calculations. */

#include <iostream>
#include <cmath>
using namespace std;

double calcH(double a, double b){
    return sqrt(pow(a, 2)+pow(b, 2));
}

int main(){
    double a,b;
    cout << "Enter the length of base and perpendicular: ";
    cin>>a>>b;
    cout<<endl;
    cout << calcH(a, b);
    return 0;
}