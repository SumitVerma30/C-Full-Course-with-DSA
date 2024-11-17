#include<iostream>
using namespace std;

int main(){
    //Arithmetic Operators-> +, -, *, /, %, ++, --.
    int num1 = 10, num2 = 5;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Substraction" << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;
    cout << "Modulus: " << num1 % num2 << endl;
    cout << "Increment: " << ++num1 << endl;
    cout << "Decrement: " << --num2 << endl;

    //Relational Operators-> ==, !, >, <, >=, <=.
    cout << "\nResults of Relational Operators: " << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 > num2) << endl;
    cout << (num1 < num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;

    //Logical Operators-> &&(Logical AND), ||(Logical OR), !(Logical NOT)
    cout << "\nResults of Logical Operators: " << endl;
    cout << (num1 > num2 && num1 < num2) << endl;
    cout << (num1 > num2 || num1 < num2) << endl;
    cout << !(num1 == num2) << endl;

    //Assignment Operators(Used to assign Value)-> =, +=, -=, /=, %=.
    /* a += 1 --> a = a + 1
       a -= 1 --> a = a - 1
       a /= 1 --> a = a / 1
       a %= 1 --> a = a % 1 */
    
    cout << "\nResults of Assignment Operators: " << endl;
    num1 += 10;
    cout << num1 << endl;
    num2 -= 10;
    cout << num2 << endl;

    //Bitwise Operators-> &, |, ^, ~, <<, >>
    cout << "\nResults of Bitwise Operators: " << endl;
    cout << (num1 & num2) << endl;
    cout << (num1 | num2) << endl;
    cout << (num1 ^ num2) << endl;
    cout << (~num1) << endl;
    cout << (num1 << 2) << endl;
    cout << (num1 >> 2) << endl;
    
    //Miscellaneous Operators-> sizeof, ternary, comma
    cout << "\nResults of Miscellaneous Operators: " << endl;
    cout << "Size of int: " << sizeof(num1) << endl;
    cout << "Ternary Operator: " << (num1 > num2 ? num1 : num2) << endl;
    cout << "Comma Operator: " << (num1, num2) << endl;

    //Unary Operators-> !, ~, ++, --, +, -, *, &, *, ->, sizeof, new, delete, throw
    cout << "\nResults of Unary Operators: " << endl;
    cout << !num1 << endl;
    cout << ~num1 << endl;
    cout << ++num1 << endl;
    cout << --num1 << endl;
    cout << +num1 << endl;
    cout << -num1 << endl;

    
    
    return 0;
}
