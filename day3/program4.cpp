#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the fibonacci terms: ";

    if(!(cin >> n)){
        cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1;   
    }
 if(n<=0){
        cerr << "Please enter a positive integer." << std::endl;
        return 1;   
    }
    int t1=0,t2=1,next;
    cout<<"First "<<n<<" terms of the Fibonacci sequence: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    cout<<endl;
    return 0;
}