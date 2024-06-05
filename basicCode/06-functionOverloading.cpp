#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "add(2, 3): " << add(2, 3) << std::endl;            // Calls add(int, int)
    std::cout << "add(2.5, 3.5): " << add(2.5, 3.5) << std::endl;    // Calls add(double, double)
    std::cout << "add(1, 2, 3): " << add(1, 2, 3) << std::endl;      // Calls add(int, int, int)

    return 0;
} 