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
   
};
class batter : public cricketer
{
    public:
    int centuries;
     batter(string s) : cricketer(s) {
    }

    void setCenturies(int c) 
     
    {
        centuries = c;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout<<"country: "<<country<<endl;
        cout<<"Centuries: "<<centuries<<endl;
    }
};
int main() 
{
    int runs;
    cin>>runs;
    batter c1("India");
    c1.setname("Sachin Tendulkar");
    c1.setruns(runs);
    c1.setCenturies(49);
    c1.display();
    return 0;
}