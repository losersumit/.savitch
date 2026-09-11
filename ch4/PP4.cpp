/* In an exam, students are given a set of questions and 1 point is awarded
for every correct answer and 0.25 points are deducted for every incorrect
answer. Write a program that prompts the user for the number of questions
that the student answered correctly and the number of incorrect answers.
The program should use a function calcMarkAsPercentage to calculate
the student’s final mark as a percentage. Carefully consider the order of
operations required to calculate the correct score and if you need to cast
any values */

#include <iostream>
using namespace std;

float calcMarkAsPercentage(float a, float b){
    return ((a - ((float)b/4))/(a+b))*100;
}

int main(){
    float c_qs, i_qs;
    cout<<"Number of correct questions: ";
    cin>>c_qs; 
    cout<<"Number of incorrect questions: ";
    cin>>i_qs; 

    cout<<calcMarkAsPercentage(c_qs, i_qs);
    return 0;
}