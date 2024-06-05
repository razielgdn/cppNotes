# Pointer

- Points to another type
- Holds the memory address of another variable
- used for indirect access to other variables
- Need not be initialized during declaration
- Declared with * operator:
```C++
int * ptr;
int *p1, *p2, *p3;
```
# Const pointers
The modifier const allows don't change the value of a variable in execution time. 
To point a const variable you need to create a const pointer.

```C++
const int MAX_SIZE = 512;
const  int *const const_ptr = &MAX_SIZE;
 ```   
 
# C++ begin and end functions
Using c++ functions begin() initializes a pointer to the first element of an array, vector, and other objects.   
The end()  function returns the last element of a object.   
In for cicles it is useful to create 
 ```C++
int array[]={2, 24, 65, 8, 92,57}
int *firs = std::begin(array);
int *last = std::end(array);
 ```
