#include <iostream>
using namespace std;
 class students 
 {
    public:
    // data members
    string name;
    int roll_no;
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
 };
 int main() {
    students s1;
    s1.name = "Aditya ";
    s1.roll_no = 1949;
    s1.display();
    return 0;
 }