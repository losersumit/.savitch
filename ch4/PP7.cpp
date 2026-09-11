/*7. The gravitational attractive force between two bodies with masses m1 and
m2 separated by a distance d is given by: VideoNote
Solution to Practice
Program 4.7 F = Gm1
m2
d2
where G is the universal gravitational constant:
G = 6.673 × 10−8 cm3
g × sec2
Write a function definition that takes arguments for the masses of two
bodies and the distance between them and that returns the gravitational
force. Since you will use the preceding formula, the gravitational force
will be in dynes. One dyne equals
g × cm
sec2

You should use a globally defined constant for the universal gravitational
constant. Embed your function definition in a complete program that
computes the gravitational force between two objects given suitable
inputs. Your program should allow the user to repeat this calculation as
often as the user wishes.*/

#include <iostream>
#include <cmath>

using namespace std; 

const double g_constant =  6.673 * pow(10, -8);

double forceCalc(double m1, double m2, double r){
    return (g_constant * m1 * m2)/(r*r); 
}

int main(){
    double m1, m2, r; 
    char choice;
    do{
        cout<<"Enter values of m1, m2, r respectively : ";
        cin>>m1>>m2>>r;
        cout<<forceCalc(m1, m2, r)<<endl;
        cout<<"Continue?(Y/N) : "; 
        cin>>choice;
    } while (choice == 'Y');
}