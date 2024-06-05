# Function overloading
Function overloading in C++ is a feature that allows you to define multiple functions with the same name but different parameter lists (different types or number of parameters). The correct function to call is determined by the arguments passed to the function at compile-time.

Example  of functon overloading:
```C++
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
```


Example of function overloading with pointers:

```C++
#include <iostream>

void print(int &i) {
    std::cout << "Integer reference: " << i << std::endl;
}

void print(const int &i) {
    std::cout << "Const integer reference: " << i << std::endl;
}

void print(int *i) {
    std::cout << "Pointer to integer: " << *i << std::endl;
}

int main() {
    int x = 10;
    const int y = 20;

    print(x); // Calls print(int &)
    print(y); // Calls print(const int &)
    print(&x); // Calls print(int *)

    return 0;
}
```

