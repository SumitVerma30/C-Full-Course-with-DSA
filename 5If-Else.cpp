#include <iostream>
using namespace std;

int main(){

    //If Statement:
    cout << "If Statement: " << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18){             //condition
        cout << "You are eligible to vote." << endl;
    }

    //If-Else Statement:
    cout << "\nIf-Else Statement: " << endl;
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks > 33){            //condition
        cout << "You are Passed." << endl;
    }
    else{
        cout << "You are Failed. " << endl;
    }

    //Another example:
    cout << "\nOdd or Even: " << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0){
        cout << "The number is even." << endl;
    }
    else{
        cout << "The number is odd. " << endl;
    }

    //If-Else-If Statement:
    cout << "\nIf-Else-If Statement: " << endl;
    int newage;
    cout << "Enter your age: ";
    cin >> newage;
    if (newage < 12){
        cout << "You are a child." << endl;
    }
    else if (newage > 18){
        cout << "You are an adult." << endl;
    }
    else if (newage > 60){
        cout << "You are a senior citizen." << endl;
    }
    else{
        cout << "You are a teenager. " << endl;
    }

    //Nested If-Else Statement:
    cout << "\nNested If-Else Statement: " << endl;
    int newmarks;
    cout << "Enter your marks: ";
    cin >> newmarks;
    if (newmarks > 33){
        if (newmarks > 90){
            cout << "You got A grade." << endl;
        }
        else{
            cout << "You got B grade." << endl;
        }
    }
    else{
        cout << "You are Failed." << endl;
    }

    

    return 0;
}