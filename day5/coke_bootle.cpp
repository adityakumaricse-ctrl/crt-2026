#include <iostream>
using namespace std;
void cokeVol(int n)
{
    cout<<"The volume of "<<n<<" bottles is: "<<n*250<<" ml"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of bottles: ";
    cin>>n;
    cokeVol(n);
    return 0;
}