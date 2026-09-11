/* Write a function declaration for a function that computes interest on a credit
card account balance. The function takes arguments for the initial balance,
the monthly interest rate, and the number of months for which interest must
be paid. The value returned is the interest due. Do not forget to compound
the interest—that is, to charge interest on the interest due. The interest due is
added into the balance due, and the interest for the next month is computed
using this larger balance. Use a while loop that is similar to (but need
not be identical to) the one shown in Display 2.14. Embed the function
in a program that reads the values for the interest rate, initial account
balance, and number of months, then outputs the interest due. Embed your
function definition in a program that lets the user compute interest due on
a credit account balance. The program should allow the user to repeat the
calculation until the user says he or she wants to end the program.*/

#include <iostream>
using namespace std;

double calc(double ib, double mir, int months){
    double interest; double ti = 0; 
    while(months>0){
        interest = ib * mir/100;
        ib = ib + interest; 
        months--; 
        ti = ti + interest; 
    }
    return ti; 
}

int main(){
    do{
    cout<<"Initial Balance : "; double ib; cin>>ib; 
    cout<<"Monthly Interest Rate(%) : "; double mir; cin>>mir; 
    cout<<"Number of Months : "; int months; cin>>months; 

    cout<<"Total compounded Interest = "<<calc(ib, mir, months)<<endl; 

    cout<<"Continue? (Y/N) : "; 
    char choice; 
    cin>>choice; 
    } while (choice == 'Y');
    
}