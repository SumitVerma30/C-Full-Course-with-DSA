// Single Inheritance
#include <iostream>
using namespace std;

class  Base {
    private:            // not inheritable
        int data1;  
    public:
        int data2;
        void setData(){
            data1 = 10;
            data2 = 20;
        }
        int getData1(){
            return data1;
        }
        int getData2(){
            return data2;
        }
};
class Derived : public Base {  
    int data3;         // class is derived publically
    public:
        void process(){
            data3 = data2 * getData1();
        }
        void display(){
            cout << "Value of data1 is: " << getData1() << endl;     // data 1 is accessed by using function as data1 is private in base class.
            cout << "Value of data2 is: " << data2 << endl;         // data 2 is accessed directly as it is public in base class.
            cout << "Value of data3 is: " << data3 << endl;
        }
};

int main() {
    Derived der;
    der.setData();
    der.process();
    der.display();
    
    return 0;
}