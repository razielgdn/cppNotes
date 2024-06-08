# Object oriented programming
Object-Oriented Programming (OOP) is a programming paradigm centered around the concept of "objects," which are instances of classes. It is designed to model real-world entities and relationships, making software design more intuitive and scalable. OOP is characterized by several key principles: encapsulation, inheritance, polymorphism, and abstraction.

- Simulate interaction of objects in real-world systems.
- Allows representation of objects in problem domain as software objects. 
- Decreases complexity of software systems.
- Make code reusable, extensible and maintainable.

# Object Model 
## Abstraction
- Abstraction focuses on important & necessary details. 
- Unwanted features are left out.
- eg name of a person without other details (age, weight, etc).
- Helps focus on important characteristics.
- Used to represent real-life objects in software, but without the associated complexity.
- Represented through a class, struct, interface, union or enum.
  
## Encapsulation
- Next step after abstraction.
- Hides the implementation details of a class. 
- The class provides behaviors without revealing the implementation.
- Objects of such classes are easy to use. 
- The internal implementation can be changed without the users' knowledge.
- Implemented through access modifiers in OO languages

## Inheritance
- Represents a hierarchy of classes.
- The classes are related through "is-a" relationship.
- The relation is due to same behavior of classes.
- The behavior and its implementation is inherited by the children from the parent. 
- The child classes may then reuse the behavior with the same implementation or provide a different implementation. 
- Promotes reuse and extensibility. 

## Composition
- Simplifies relationship between objects.
- Represented as "has-a" or "part-of" relationship.
- Promotes reuse of objects.
- e.g. car has an engine. 
  
## Polymorphism
- Means different forms.
- Represents common behavior with different implementations.
- Response will be different for each object, either based on its class or the arguments.
- Implemented through function overloading, templates and virtual functions. 
- Used in conjunction with inheritance and composition. 
- Promotes reuse, scalability and extensibility. 

# Example of implementation
## Classes and objects
- Class: A blueprint for creating objects. It defines a set of properties (attributes) and methods (functions) that the objects created from the class will have.
```c++
class Car {
public:
    std::string brand;
    std::string model;
    int year;

    void displayInfo() {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }
};
```
- Object: An instance of a class. It is created using the class blueprint and has its own values for the properties defined in the class.
```c++
Car myCar;
myCar.brand = "Toyota";
myCar.model = "Corolla";
myCar.year = 2021;
myCar.displayInfo();  // Outputs: Brand: Toyota, Model: Corolla, Year: 2021
```

## Encapsulation
Encapsulation is often achieved through access modifiers like private, protected, and public.
```c++
class Employee {
private:
    int id;
    std::string name;
public:
    void setId(int newId) {
        id = newId;
    }
    int getId() {
        return id;
    }
};
```
## Inheritance
The mechanism by which one class (the child or derived class) inherits the attributes and methods of another class (the parent or base class). It allows for the creation of a new class based on an existing class, promoting code reuse and the creation of hierarchical relationships.

```c++
class Vehicle {
public:
    std::string brand;
    void honk() {
        std::cout << "Beep beep!" << std::endl;
    }
};

class Car : public Vehicle {
public:
    std::string model;
    void displayModel() {
        std::cout << "Model: " << model << std::endl;
    }
};

Car myCar;
myCar.brand = "Toyota";
myCar.model = "Corolla";
myCar.honk();  // Outputs: Beep beep!
myCar.displayModel();  // Outputs: Model: Corolla
```
## Polymorphism

```c++
class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof woof!" << std::endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

Animal* myDog = new Dog();
Animal* myCat = new Cat();

myDog->makeSound();  // Outputs: Woof woof!
myCat->makeSound();  // Outputs: Meow!
```

