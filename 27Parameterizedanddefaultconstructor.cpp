// Parameterized and default constructor
#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
        complex (int, int);         // constructor declaration
    
        void printnumber () {
            cout << "Your Number is: " << a << " + " << b << "i" << endl;
        }
};
// Default Constructor
// complex :: complex (void){              //This is default constructor as it take no parameters
//     a = 0;
//     b = 0;
// }

//Parameterized constructor
complex :: complex (int x, int y){      // This is parameterized constructor as it takes parameters and assign parameters.
    a = x;
    b = y;
}

int main() {
    //Implicit call
    complex a(4, 6);
    a.printnumber();

    //explicit call
    complex b = complex(5, 7);
    b.printnumber();
    
    return 0;
}