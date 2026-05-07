#include <iostream>
using namespace std;
class student {
    int roll;
    string name;
public:
    // Default Constructor
    student() {
        roll = 0;
        name = "your name please";
    }

    // Parameterized Constructor
    student(int r, string n) {
        roll = r;
        this->name = n;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    student s1;  // Calls default constructor
    student s2(101, "adi");  // Calls parameterized constructor

    s1.display();
    s2.display();

    return 0;
}