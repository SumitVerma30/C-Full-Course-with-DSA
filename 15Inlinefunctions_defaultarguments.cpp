// Inline Functions and Default arguments.
#include <iostream>
using namespace std;

//Inline Function
inline int product(int a, int b) {
    return a * b;
}

//Default arguments
int moneyreceived(int currentmoney, float interest = 1.4){           // here interest has default argument.
    return currentmoney * interest;
}

int main() {
    int a, b;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;

    cout << "the product is: " << product(a, b) << endl;

    int money = 100000;
    cout << "After receiving interest, the money received is: " << moneyreceived(money) << endl;
    cout << "After receiving interest to VIP's, the money received is: " << moneyreceived(money, 10) << endl;
    
    return 0;
}