#include <iostream>
using namespace std;
class cricketers
{
    public:
    string name;
    int runs;
//parameterizes constructor
    cricketers(string n, int runs) {
        name = n;
       this->runs = runs;
    }
    // copy constructor
    cricketers(const cricketers &c) {
        name = c.name;
        runs = c.runs;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};
int main(){
    cricketers c1("Virat Kohli", 1200);
    cricketers c2 = c1; // copy constructor is called
    c1.display();
    cout << endl;
    c2.display();
    return 0;
}