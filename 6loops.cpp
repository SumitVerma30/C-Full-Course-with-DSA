#include<iostream>
using namespace std;

int main(){
    //While Loop
    int i = 1;

    while (i <= 10){        //condition / test-expression
        cout<<i<<endl;
        i++;                //update value
    }

    //Print the sum of first n natural numbers, where n is the input
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;
    int a = 1;

    while (a <= n){         //condition
        sum = sum + a;
        a++;                //updating loop variable
    }

    cout<<"Sum of first "<<n<<" Natural numbers are: "<<sum<<endl;

    //For Loop
    int x;
    for (x = 1; x <= 10; x++){
        cout<<x<<endl;
    }

    //Print the sum of first n natutral numbers using for loop
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int sum1 = 0;

    for (int b = 1; b <= n; b++){
        int sum1 = sum1 + num;
    }

    cout<<"Sum of first "<<n<<" Natural number using for loop are: "<<sum1<<endl;
    
    //Print the first multiple of 5 which is also a multiple of 7
    //Using while loop
    i = 5;
    while (true){
        if (i % 7 == 0){
            cout<<"First multiple of 5 which is also a multiple of 7 is: "<<i<<endl;
            break;
        }
        i += 5;
    }
    //Usinf for loop
    for (i = 5; i +=5;){
        if (i % 7 == 0){
            cout<<"First multiple of 5 which is also a multiple of 7 is: "<<i<<endl;
            break;
        }
    }

    //Do-While loop
    //Print the Sum of stream of Nintegers int he inout using do-while loop
    int num2;
    cout<<"Enter a number: ";
    cin>>num2;
    int sum2 = 0;
    do{
        int num2;
        sum2 = sum2 + num2;
        }while (num2 != 0);
    

    return 0;
}