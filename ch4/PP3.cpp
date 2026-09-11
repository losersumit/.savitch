/* The price of stocks is sometimes given to the nearest eighth of a dollar; for
example, 297/8 or 891/2. Write a program that computes the value of the
user’s holding of one stock. The program asks for the number of shares of
stock owned, the whole-dollar portion of the price, and the fraction portion.
The fraction portion is to be input as two int values, one for the numerator
and one for the denominator. The program then outputs the value of
the user’s holdings. Your program should allow the user to repeat this
calculation as often as the user wishes and will include a function definition
that has three int arguments consisting of the whole-dollar portion of the
price and the two integers that make up the fraction part. The function
returns the price of one share of stock as a single number of type double. */

#include <iostream>
using namespace std;

float function(int a, int b, int c){
    return (float)a + (float)b/(float)c;
}

int main(){
    cout<<"How many shares?";
    int shares;
    cin>>shares; 

    cout<<"Whole-dollar price? ";
    int dollar_price; 
    cin>>dollar_price; 

    cout<<"Enter numerator: ";
    int numerator; 
    cin>> numerator;

    cout<<"Enter Denominator: ";
    int denominator; 
    cin>> denominator; 

    float total_price = shares*function(dollar_price, numerator, denominator);
    cout<<total_price; 

    return 0;
}