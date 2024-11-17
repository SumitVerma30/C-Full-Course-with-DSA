// Pointers.
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int * b = &a;           //&--> reference operator, stores address of variable.  //* ---> dereference operator.

    cout << "The address of a is: " << b << endl;
    
    //* --> (value at variable) Dereference operator.
    cout << "The value at address of b is: " << *b << endl;

    //pointer to pointer (Which saves the address of another pointers.)
    int** c = &b;
    cout << "The address of b is: " << c << endl;
    cout << "The address at b is: " << *c << endl;
    cout << "The value at c is: " << **c << endl;

    return 0;
}
