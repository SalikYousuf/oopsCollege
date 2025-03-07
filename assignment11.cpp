#include <iostream>
using namespace std;

int main() {
    double operand1, operand2, result = 0;
    char op;

    // Input operands and operator
    cout << "Enter first operand: ";
    cin >> operand1;
    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;
    cout << "Enter second operand: ";
    cin >> operand2;

    
    string errorMessage = "";
    bool validOperation = true;

    result = (op == '+') ? (operand1 + operand2) :
             (op == '-') ? (operand1 - operand2) :
             (op == '*') ? (operand1 * operand2) :
             (op == '/') ? (operand2 != 0 ? operand1 / operand2 : (validOperation = false, 0)) :
             (op == '%') ? (static_cast<int>(operand2) != 0 ? static_cast<int>(operand1) % static_cast<int>(operand2) : (validOperation = false, 0)) :
             (validOperation = false, 0);

    
    if (!validOperation) {
        if (op == '/' || op == '%') {
            errorMessage = "Error: Division or modulus by zero is not allowed.";
        } else {
            errorMessage = "Error: Invalid operator.";
        }
    }
     if (errorMessage.empty()) {
        cout << "Result: " << result << endl;
    } else {
        cout << errorMessage << endl;
    }
    return 0;
}