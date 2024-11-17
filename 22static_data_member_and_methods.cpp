// Static Data Member and Static Member function:-
#include <iostream>
using namespace std;

class employee {
    int id;
    static int count;       // static member declaration
    public:
    void setdata(){
        cout << "Enter the id: ";
        cin >> id;
        count ++;
    }
    void getdata (){
        cout << "The id of employee is: " << id << " and this is employee count: " << count << endl;
    }
    static void getcount (){            // static member function/method
        cout << "The value of count is: " << count << endl;
    }
};

int employee :: count;      // static member definition.   // default value is zero

int main() {
    employee e1, e2;
    // e1.id = 1;
    // e1.count = 1 // cannot do this as id and count are private members.

    e1.setdata ();
    e1.getdata();
    e1.getcount();
    
    e2.setdata();
    e2.getdata ();
    e1.getcount();

    return 0;
}