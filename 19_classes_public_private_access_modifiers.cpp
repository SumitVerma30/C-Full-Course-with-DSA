// Classes, Public and Private access modifiersin C++.
#include <iostream>
using namespace std;

class Employee {
    private:
        int a, b, c;
    public:
        int d, e;
        void setdata(int a1, int b1, int c1);      // Declaration
        void getdata(){
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
            cout << "The value of c is: " << c << endl;
            cout << "The value of d is: " << d << endl;
            cout << "The value of e is: " << e << endl;
        }
};
void Employee :: setdata (int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}
int main() {
    Employee e1, e2;
    e1.setdata(10, 20, 30);
    e1.d = 40;
    e1.e = 50;
    
    e1.getdata();

    e2.setdata(60, 70, 80);
    e2.d = 90;
    e2.e = 100;
    
    e2.getdata();
    
    return 0;
}