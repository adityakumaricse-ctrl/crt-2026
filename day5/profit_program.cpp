#include <iostream>
using namespace std;

void Discount(double &bill) {
bill = bill *0.9; 
}
 int main() {
    double bill = 250.60;
    cout << bill << endl;
    Discount(bill);
    cout << bill <<endl;
    return 0;
 }