#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class SimpleCalculator {            // Simple Calculator class for simple calculations
protected:
    double num1, num2;
    string op; 

public:
    void takeInput() {
        cout << "Enter First Number: ";
        cin >> num1;
        cout << "Enter operation (+, -, *, /, ^, log, sin, cos): ";     // Takes operation to perform
        cin >> op;
        cout << "Enter Second Number: ";
        cin >> num2;
    }
    void display();
};

void SimpleCalculator :: display() {
    if (op == "+" || op == "-" || op == "*" || op == "/") {
        switch (op[0]) {
            case '+':
                cout << "The result is: " << num1 + num2 << endl;
                break;
            case '-':
                cout << "The result is: " << num1 - num2 << endl;
                break;
            case '*':
                cout << "The result is: " << num1 * num2 << endl;
                break;
            case '/':
                if (num2 == 0) {
                    cout << "Error! Division by zero is not allowed." << endl;
                } else {
                    cout << "The result is: " << num1 / num2 << endl;
                }
                break;
        }
    } else {
        cout << "Invalid operation for SimpleCalculator" << endl;
    }
}

class ScientificCalculator : public SimpleCalculator {      // class for Scientific calculations.
public:
    void display() {
        if (op == "^") {
            cout << "The result is: " << pow(num1, num2) << endl;
        } else if (op == "log") {
            cout << "The log of first number is: " << log(num1) << endl;
            cout << "The log of second number is: " << log(num2) << endl;
        } else if (op == "sin") {
            cout << "The result is: " << sin(num1) << endl;
            cout << "The result is: " << sin(num2) << endl;
        } else if (op == "cos") {
            cout << "The result is: " << cos(num1) << endl;
            cout << "The result is: " << cos(num2) << endl;
        } else {
            cout << "Invalid operation" << endl;
        }
    }
};

class HybridCalculator : public ScientificCalculator {      // Hybrid class to display result of both depend upon operation.
public:
    void display() {
        if (op == "+" || op == "-" || op == "*" || op == "/") {
            SimpleCalculator :: display();
        } else if (op == "^" || op == "log" || op == "sin" || op == "cos") {
            ScientificCalculator :: display();
        } else {
            cout << "Invalid operation" << endl;
        }
    }
};

int main() {
    HybridCalculator calc;
    calc.takeInput();
    calc.display();

    return 0;
}
