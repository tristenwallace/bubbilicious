#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to check if the last hexadecimal digit of a number is 'B'
bool endsWithHexB(int num) {
    return (num % 16 == 11);
}

int main() {
    int count = 0;

    for (int i = 2; i <= 100000; ++i) {
        if (isPrime(i) && endsWithHexB(i)) {
            count++;
        }
    }

    std::cout << "Number of Bubblicious Numbers between 1 and 100,000: " << count << std::endl;

    return 0;
}