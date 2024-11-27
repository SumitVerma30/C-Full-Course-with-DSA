// MultiLevel Inheritance.
#include <iostream>
using namespace std;

class Student {
    protected:
        int rollNumber;
    public:
    void setRollNumber(int r){
        rollNumber = r;
    }
    void getRollNumber(){
        cout << "The Roll Number is: " << rollNumber << endl;
    }
};
class Exam : public Student {
    protected:
        float maths, physics;
    public:
        void setmarks (float m, float p){
            maths = m;
            physics = p;
        }
        void getmarks(){
            cout << "The Marks of Maths are: " << maths << endl;
            cout << "The Marks of Physics are: " << physics << endl;
        }
};
class Result : public Exam {
    float percentage;
    public:
        void display (){
            getRollNumber();
            getmarks();
            cout << "The result/percentage is: " << (maths + physics)/2 << endl;
        }
};

int main() {
    Result s1;
    s1.setRollNumber(92);
    s1.setmarks(85.5, 90.5);
    s1.display();
    
    return 0;
}