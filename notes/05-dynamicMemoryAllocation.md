# Memory management
- C/C++ programs are provided with different types of memory areas
  - stack: allocated automatically for local variables.
  - data section: allocated for global and static data.
  - heap: allocated at runtime. 

- All the memory is taken from the process address space.
- C/C++ programs provide support for memory allocation at runtime (also called dynamic memory).
- Allocations on the heap have to be managed by the programmer. 
  

# Dinamic memory allocation in C
 C provides various functions for allocating memory from the heap.
   - malloc: allocate raw memory on the heap. 
   - calloc: allocate memory on the heap an initializes it to zero.
   - ralloc: allocates larger chunk of memory for an existing allocation.
   - free:   deallocates/releases the memory allocated through the above functions.

## Usage
standard library should be added: ``` #include <stdlib.h>``` 
- In the case of malloc:
``` C++ 
#define ELEMENTS_NUMBER 1
int *p =(int *) malloc(sizeof(int)*ELEMENTS_NUMBER); 
if(p==NULL){
  printf("filed to allocate memory")
}
*p = 5; 
free(p); 
```

- Calloc initialize the reserved memory with zeros. 
``` C++ 
#define ELEMENTS_NUMBER 1
int *p =(int *) calloc(ELEMENTS_NUMBER,sizeof(int)); 
if(p==NULL){
  printf("filed to allocate memory")
}
*p = 5; 
free(p); 
```
# Dynamic memory allocation in C++
C++ provides two operator for dynamic memory allocation:
- **new**: allocates memory on the heap.
- **delete**: deallocates memory. 
- Memory that is allocated through *new* has to be released with *delete*. 

## new for Arrays
- Another form of new
- Used for allocating dynamic arrays
- Written as new[]
- Subsequently, use delete [] for releasing the memory
```
<type> *<variable> = new <type> [size];
delete [] <variable>;
```
## Usage
The new operator can be used without an initialization.
```C++
int *p= new int;
*p =6;
std::cout << *p << std::endl;
delete p;
p = nullptr;
```
You can init the reserved space example: 
```C++
 int *p= new int(5); //init the reserved space with 5
*p =6;
```
Reserve memory for an array example:
```c++
int *p = new int[5]; //Allocate memory for 5 integers
p[0] = 23;
delete []p;
```
Reserve memory for multidimensional array example:

```c++
int *p1 = new int [3];
int *p2 = new int [3];
int **pData = new int *[2];
pData[0] = p1;
pData[1] = p2;
pData [0][1] =2;

delete []p1;
delete []p2;
delete []pData;
```

