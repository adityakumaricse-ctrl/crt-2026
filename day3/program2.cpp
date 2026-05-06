#include <iostream>

int main() {
    int num;
    int sum = 0;

    std::cout << "Enter positive integers to sum (Enter a negative number to stop):" << std::endl;

    while (true) {
        if(!(cin >> num)){
            cerr << "Invalid input. Please enter an integer." << std::endl;
            return 1;
        }
         if (num < 0) {
            break; 
        }
        sum += num;
    }

    std::cout << "\nLoop stopped because a negative number was entered." << std::endl;
    std::cout << "Total sum of positive numbers: " << sum << std::endl;

    return 0;
}