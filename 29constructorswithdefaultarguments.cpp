// Constructors with default arguments.
#include <iostream>
using namespace std;

class simple {
    int data1;
    int data2;
    int data3;
    public:
        simple (int a, int b = 8, int c = 9){          //here constructor has default argument (default value of b)
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printdata();

};

void simple :: printdata(){
    cout << "Data1: " << data1 << endl;
    cout << "Data2: " << data2 << endl;
    cout << "Data3: " << data3 << endl;
    return;
}

int main() {
    simple s(1);
    s.printdata();
    
    return 0;
}