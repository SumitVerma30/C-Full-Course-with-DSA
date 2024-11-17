// Recursion & Recursive Functions
#include <iostream>
using namespace std;

//Factorial
int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n-1);      //this is recursive function. As it call itself repeatedly untill it open itself fully.
}

//Fibonacci Series.
int fib(int n){
    if (n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main() {
    //Factorial of a number:
    int n;
    cout << "Enter a number: ";
    cin >> n;

    //Recursive function to calculate factorial:
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    //Fibonacci series:
    cout << "The term in fibinacci sequence at position " << n << " is: " << fib(n) << endl;
    
    return 0;
}