//Multiple Inheritance.
#include <iostream>
using namespace std;

class Base1 {                   // First Base Class
    protected:
        int base1int;
    public:
        void set_base1int (int a){
            base1int = a;
        }
};

class Base2 {                   // Second Base class
    protected:
        int base2int;
    public:
        void set_base2int (int a){
            base2int = a;
        }
};

class Derived : public Base1, public Base2 {            // Derived class inherited from multiple base classes.
    public:
        void show() {
            cout << "The value of base 1 is: " << base1int << endl;
            cout << "The value of base 2 is: " << base2int << endl;
            cout << "The sum of base 1 and base 2 is: " << (base1int + base2int) << endl;
        }
};

int main() {
    Derived d1;
    d1.set_base1int(10);
    d1.set_base2int(20);

    d1.show();
    
    return 0;
}