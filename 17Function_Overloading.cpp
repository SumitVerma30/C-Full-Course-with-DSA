//Function Overloading
#include <iostream>
using namespace std;

int add (int a, int b){
    return a + b;
}
int add (int a, int b, int c){      //Function Overloading as same function name with different arguments.
    return a + b + c; 
}

//Volume of Cylinder.
int volume (double r, int h){
    return (3.14 * r * r * h);
}

//Volume of Cube.
int volume (int a){
    return a * a * a;
}

int main() {
    cout << "The sum of two numbers is: " << add(5,4) << endl;
    cout << "The sum of three numbers is: " << add(5,4,6) << endl;
    cout << "The volume of cylinder is: " << volume(5.5, 6) << endl;
    cout << "The volume of cube is: " << volume(5) << endl;
    return 0;
}