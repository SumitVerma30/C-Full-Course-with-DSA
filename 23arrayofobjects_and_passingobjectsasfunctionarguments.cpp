#include <iostream>
using namespace std;

class employee {
    int id;
    int salary;
    public:
    void setid(){
        salary = 122;
        cout << "Enter the id of employee: ";
        cin >> id;
    }
    void getid(){
        cout << "The id of this employee is: " << id << endl;
    }
};

int main () {
    // employee e1, e2;
    // e1.setid();
    // e1.getid();
    employee fb[4];             // Array of objects

    for (int i = 0; i < 4; i++){        // loop on array to print id.
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}