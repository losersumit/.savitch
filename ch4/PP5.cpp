// 5. Modify your program from the previous Practice Program to ask the user
// for the number of students whose marks are to be entered. Your program
// should then prompt the user for the marks of the required number of students. 
// If a student gets a score lower than 0, their mark should be set to
// and output as 0. Your program should then print the highest, lowest, and
// average score of the students whose scores were calculated.

#include <iostream>
using namespace std; 

int main(){
    int n; cout<<"Enter number of students : "; cin>>n; 
    int ar[n]; int sum=0; int largest = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter marks for student "<<i+1<<" : "; 
        cin>>ar[i];
        if (ar[i]<0){
            ar[i]=0;
        }
        sum = sum + ar[i]; 
        if(ar[i]>largest){
            largest=ar[i];
        }
    }
    int smallest = ar[0]; 
    for(int i=1; i<n; i++){
        if(ar[i]<smallest){
            smallest = ar[i];
        }
    }
    cout<<"Smallest : "<<smallest<<endl; 
    cout<<"Largest : "<<largest<<endl;
    cout<<"Average : "<<(float)sum/n;
}