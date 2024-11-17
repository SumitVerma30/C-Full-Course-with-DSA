// Friend Functions.
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    friend Complex sumComplex(Complex o1, Complex o2); // Friend function declaration
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is: " << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)      // Function definition // not a member of class comlex // Data is accessed as friend function.
{ 
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/*Properties of friend function:-
1. Not in the scope of class.
2.since it is not in scope of class, it cannot be called from the objects of that class.
3. can be invoked without the help of any object.
4. Usually contains the objects as arguments.
5. Can be declared inside public or peivate section of the class.

*/