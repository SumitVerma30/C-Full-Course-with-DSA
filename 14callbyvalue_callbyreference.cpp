// Call by Value and Call by Reference
#include <iostream>
using namespace std;

int sum (int a, int b){             // Call by value. // Value of actual parameters are copied to formal parameters.
    int c = a + b;
    return c;
}

//This will not swap a and b
int swap (int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
//Value can swap using address
void swapPointer (int* a, int* b){                  // Call by reference using pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using C++ reference Variables
void swapReferenceVar (int &a, int &b){             // Call by reference using reference variable
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    x = 4;
    y = 5;
    cout << "The sum of 4 and 5 is: " << sum(x, y) << endl;
    
    cout << "Before swapping, x = " << x << " and y = " << y << endl;

    swap(x, y);     // This will not swap a and b.
    cout << "After swapping, x = " << x << " and y = " << y << endl;        // not swapped

    //Call by reference 
    swapPointer(&x, &y);        // This will swap a and b using pointer reference.
    cout << "After swapping using pointer, x = " << x << " and y = " << y << endl; // swapped  //Function Call by reference
    swapReferenceVar(x, y);    // This will swap a and b using reference variable.
    cout << "After swapping using reference variable, x = " << x << " and y = " << y << endl; // swapped  //Function Call by reference
    
    return 0;
}