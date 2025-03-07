#include <iostream>
using namespace std;

int main() {
    double income, tax = 0.0; 
    cout << "Enter your annual income: Rs. ";
    cin >> income;
    if (income <= 250000) {
        tax = 0.0; 
        if (income <= 500000) {
            tax = 0.05 * (income - 250000); 
            if (income <= 1000000) {
                tax = 0.05 * 250000 + 0.20 * (income - 500000); 
            }
        } 
    } 
     else {  
        tax = 0.05 * 250000 + 0.20 * 500000 + 0.30 * (income - 1000000); 
    }
    cout << "The calculated tax is: Rs. " << tax << endl;

    return 0;
}
