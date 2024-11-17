#include <iostream>
using namespace std;

int main() {
    // Break Statement
    cout << "Code of Break Statement" <<endl;
    for (int i = 1; i < 5; i++){
        if (i == 2){
            break;                  // exit from loop if condition is meet.
        }
        cout << i <<"\n"<< endl;
    }

    //Continue Statement
    cout << "Code of Continue Statement" <<endl;
    for (int i = 1; i < 5; i++){
        if ( i == 2){
            continue;               // skip the itration and continue to next iteration.
        }
        cout << i << endl;
    }
    
    return 0;
}