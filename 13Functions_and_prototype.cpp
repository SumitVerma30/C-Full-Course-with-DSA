//Functions and Function prototype.
#include <iostream>
using namespace std;

int sum (int a, int b){             //Function declaration          // a and b are formal parameters.
    int c = a + b;
    return c;
}

int sub (int a, int b);             //Function prototype //Function declaration

//int sum (int a, int b);            //acceptable
//int sum (int a, b);               //not acceptable 
//int sum (int, int);               //acceptable


int main() {
    int num1, num2;                 // num1 and num2 are actual parameters
    cout << "Enter First number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "The sum is: " << sum(num1, num2) << endl;        // calling a function

    cout << "The substract is: " << sub (num1, num2) << endl;

    return 0;
}

int sub(int a, int b){             //Function definition
    int c = a - b;
    return c;
}