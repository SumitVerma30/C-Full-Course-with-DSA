// Structures, Unions, and enums
#include <iostream>
using namespace std;

// Structures
typedef struct employee{
    int id;
    char favChar;
    float salary;

} ep;                  // employee short form using after typing typedef.

//Union
union money {         // it accept only 1 value of only one variable and overwrite the first if we give value to other variable.

    int rice;
    char car;
    double dollors;
};

int main() {
    // Structures
    struct employee e1;
    ep e2;                         // we can also create object them using ep now.
    e1.id = 1;
    e1.favChar = 'A';
    e1.salary = 500000.0;

    e2.id = 2;
    e2.favChar = 'B';
    e2.salary = 600000.0;

    cout << e1.id << endl;
    cout << e1.favChar << endl;
    cout << e1.salary << endl;
    cout << e2.id << endl;
    cout << e2.favChar << endl;
    cout << e2.salary << endl;

    //Union
    union money m1;
    m1.rice = 100;
    cout << m1.rice << endl;           //It gives 100.
    m1.car = 'c';
    cout << m1.car << endl;            //It gives c. //value of rice is now overwritted
    m1.dollors = 1000.0;
    cout << m1.dollors << endl;       //It gives 1000.0 // now value of car and rice is overwritten.

    //Enum
    enum Meal {Breakfast, Lunch, Dinner};           // It enumerates the index of values.
    cout << Breakfast <<endl;
    cout << Lunch <<endl;
    cout << Dinner <<endl;

    return 0;
}
