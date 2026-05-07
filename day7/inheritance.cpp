#include <iostream>
using namespace std;
//base class or parent class
class player {
    public:
    string name;
    int runs;
    void setname(string n) 
    {
        name=n;
    }
    void setruns(int r) 
    {
        runs=r;
    }
};   
//derived class or child class  
class cricketer : public player 
{
    public:
    string country;
    cricketer(string s)
     {
        country = s;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout<<"country: "<<country<<endl;
    }
};
int main() 
{
    int runs;
    cin>>runs;
    cricketer c1("India");
    c1.setname("Virat Kohli");
    c1.setruns(runs);
    c1.display();
    return 0;
}
