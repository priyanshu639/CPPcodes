#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Handle special cases
    if (num <= 1) return false;
    if (num <= 3) return true;

    // Check if divisible by 2 or 3
    if (num % 2 == 0 || num % 3 == 0) return false;

    // Check divisors from 5 to sqrt(num)
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number;
    }
    return 0;
}