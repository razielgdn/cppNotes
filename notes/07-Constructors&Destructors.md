# Constructor
There are invoked automatically during instantiation. Its use is for initialization of a class and doesn't have any return type. A constructor ca be overloaded. 
A default constructor with no arguments is synthesized by the compiler if no an user-defined constructor exists. You should create constructors to a better implementation of an object. Constructors can be overloaded.
Example of constructors:
```c++
Car::Car(){   
}
Car::Car(float amount){
   fuel = amount;   
}
Car::Car(float amount, int passengers){
   this->fuel = amount; 
   this->passengers = passengers  
}
```

# Destructor 
It should be invoked when an object is destroyed. A destructor is used for releasing resources that may have been allocated in the constructor. It can not be overloaded and a destructor has no arguments. 

```c++
Car::~Car (){

}
```
# **this** pointer
The this pointer is a powerful feature in C++ that:   
- References the current instance of the class.
- Resolves ambiguity between member variables and local variables.
- Facilitates method chaining by returning the current object.
- Helps handle self-assignment in operator overloading.
- Enhances clarity and maintainability of the code.

Examples:  
### Accessing members of the class
``` c++
 Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }
```
### Returning the Current Object:
``` c++
class Box {
private:
    int length, breadth, height;

public:
    Box& setLength(int length) {
        this->length = length;
        return *this;
    }

    Box& setBreadth(int breadth) {
        this->breadth = breadth;
        return *this;
    }
```
### Self-Assignment Check in Operator Overloading:
```c++
 // Assignment operator
    MyClass& operator=(const MyClass& other) {
        if (this == &other) {
            return *this; // Return *this to handle self-assignment
        }

        delete data; // Free existing resource
        data = new int(*other.data); // Allocate new resource

        return *this;
    }
```
### Distinguishing Between Member and Local Variables:
```c++
  void setValue(int value) {
        this->value = value; // 'this->value' refers to the member variable
    }
```

# Copy constructors
A copy constructor in C++ is a special constructor used to create a new object as a copy of an existing object. 
1. Copying Objects During Initialization:
When an object is initialized with another object of the same class, the copy constructor is called.
```c++
class String {
private:
    char* data;
    size_t length;

public:
    // Constructor
    String(const char* str) {
        length = std::strlen(str);
        data = new char[length + 1];
        std::strcpy(data, str);
    }   
    // Copy constructor
    String(const String& other) {
        length = other.length;
        data = new char[length + 1];
        std::strcpy(data, other.data);
    }
// in main.c
    String str1("Hello, world!");
    String str2 = str1; // Copy constructor is called here
    str1.print(); // Output: Hello, world!
    str2.print(); // Output: Hello, world!
```
2. Passing Objects by Value:
When an object is passed by value to a function, the copy constructor is used to create a copy of the object.
```c++ 
void displayString(String str) {
    str.print();
}
int main() {
    String str("Hello, world!");
    displayString(str); // Copy constructor is called here
    return 0;
}
```
3. Returning Objects by Value:
When a function returns an object by value, the copy constructor is used to copy the returned object.
```c++
void displayString(String str) {
    str.print();
}
int main() {
    String str("Hello, world!");
    displayString(str); // Copy constructor is called here
    return 0;
}
```
4. Member-wise Copying:
If a class contains objects of other classes as member variables, the copy constructor is called for these member objects.
```c++
class Inner {
public:
    Inner() { std::cout << "Inner constructor called" << std::endl; }
    Inner(const Inner&) { std::cout << "Inner copy constructor called" << std::endl; }
};
class Outer {
private:
    Inner inner;

public:
    Outer() { std::cout << "Outer constructor called" << std::endl; }
    Outer(const Outer& other) : inner(other.inner) {
        std::cout << "Outer copy constructor called" << std::endl;
    }
};
int main() {
    Outer obj1;
    Outer obj2 = obj1; // Copy constructor for Outer and Inner called here
    return 0;
}
``` 
5. Preventing Shallow Copies:
When an object contains pointers or dynamically allocated resources, the default copy constructor (which performs a shallow copy) may lead to issues such as double deletion. Implementing a custom copy constructor ensures deep copying.
```c++
class Array {
private:
    int* data;
    size_t size;

public:
    // Constructor
    Array(size_t size) : size(size) {
        data = new int[size];
    }
    // Destructor
    ~Array() {
        delete[] data;
    }
    // Copy constructor
    Array(const Array& other) : size(other.size) {
        data = new int[size];
        std::copy(other.data, other.data + size, data);
    }
    void print() const {
        for (size_t i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
   }
};
int main() {
    Array arr1(5);
    Array arr2 = arr1; // Copy constructor is called here
    arr1.print(); // Output: 0 0 0 0 0
    arr2.print(); // Output: 0 0 0 0 0
    return 0;
}
```



The copy constructor is crucial for:
- Ensuring proper resource management.
- Avoiding shallow copy issues.
- Allowing safe copying of objects in various contexts (initialization, function arguments, return values).
- Maintaining class invariants and resource ownership rules.

