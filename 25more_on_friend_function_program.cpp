#include <iostream>
using namespace std;

class Y;        //Forward declaration
class X {
    private:
        int data;
    public:
        void setdata(int value){
            data = value;
        }
    friend void add (X, Y);
};
class Y {
    private:
        int num;
    public:
        void setdata(int value){
            num = value;
        }
    friend void add (X, Y);
};
void add (X o1, Y o2){
    cout << "The sum of data of X and Y is: " << o1.data + o2.num << endl;
}

int main() {
    X a1;
    a1.setdata (5);

    Y b1;
    b1.setdata (7);

    add (a1, b1);
    
    return 0;
}