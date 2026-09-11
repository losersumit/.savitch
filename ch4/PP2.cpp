/*Modify your program from Practice Program 1 to add a function to
calculate the perimeter of the triangle. Your function calcPerimeter
should accept two arguments and return a double. Your calcPerimeter
function should use your calcH function in working out the perimeter.
Add the perimeter to the output of your program.*/

#include <iostream>
#include <cmath>
using namespace std;

double calcH(double a, double b); 

double calcPerimeter(double a, double b){
    return a + b + calcH(a, b); 
}

double calcH(double a, double b){
    return sqrt(pow(a, 2)+pow(b, 2));
}


int main(){
    double a,b;
    cout << "Enter the length of base and perpendicular: ";
    cin>>a>>b;
    cout << calcPerimeter(a,b);
    return 0;
}