// Destructor.
#include <iostream>
using namespace std;

int count = 0;

class num {
    public:
    num() {
        count ++;
        cout << "This is the object number: " << count << endl;
    }
    ~num() {
        count --;
        cout << "This object is being destroyed, remaining objects: " << count << endl;
    }

};

int main() {
    cout << "We are inside a main function" << endl;
    cout << "Creating first object" << endl;
    num n1;
    {
        cout << "Creating two more object" << endl;
        num n2, n3;
        cout << "Creating three objects" << endl;
    }
    cout << "Back to mainc";


    return 0;
}