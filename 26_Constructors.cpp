#include <iostream>
using namespace std;

class complex {
    int a, b;
    public:
        complex ();         // Constructor declaration
        void printnumber (){
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
};

complex :: complex (){      // Constructor definition
    a = 10;
    b = 20;
}

int main() {
    complex c1, c2;
    c1.printnumber();
    c2.printnumber();
    
    return 0;
}