# What is C++
- C++ is a general purpose programming language. 
- Object oriented, imperative and generic
- Emphasis on system programming
- Low-level like C, but feature-rich

# New Features
- R value references
- Move samntics
- Non- static data member initializars
- Initialializer lists
- Delegating constructors
- Automatic type inference
- Null pointer constant
- Range-base for
- Raw string literals
- nullptr
- Lambda expressions
- Concurrency
- Variadic templates
- Type aliases
- Strongly-typed enums
- Deleted functions
- Explicit virtual overrides

# What is Modern C++
- Encompasses features of C++
- Move semantics
- Smart pointers
- Auitomatic type inference
- Threading
- Lambda functions

# Why is C++ used
- Used for perfonance, stability & portability
- Available on almos all operating systems
- No dependency on separate runtime
- Smaller memory foodprint
- Can run in constrained environment
- Standard C++ code can be easily ported to multiple platforms

# C++ Build Steps
- Preprocessing
  - Statements beginning with # are expanded or replaced
  - macros are expanded
- Compilation 
  - Code is checked for correct syntax
  - Converted into object code
- Linking 
  - The object code is linked with the standard libraries
- The output of linking is the executable fine


# Primitive types
- Arithmetic & void
- Arithmetic -> Integral & floating point
- Integral types -> bool, char, wchar_t, char16r, char32_t, short, int, long
- Floating point -> float & double
- void is a special type used with pointers & functions

# Modifiers
- Keywords to extend or change behavior of primitive types
   - signed, unsigned, short, long
- All types can be quialified with quialifiers
    - const
    - static
    - volatile
- All types occupy memory and can hold a range of values
    - memory requirements may change eith platform

# Datatype Size
- **1 byte**: 
    - bool 
    - char 
- **2 bytes**:
    - wchart_t
    - short
- **4 bytes**
    - int
    - long
    - float
- **8 bytes**
    - long long
    - double
    - long double
## climits ( limits.h)    
Provides a list of MACROS with the definition of the limits of the primitive variable types. 


# Uniform initialization 
- C++98 provided different ways to initialize types
    - Scalar types  can be initialized with = or ()
    - Array types  have to be initialized with {}
- C++11 introduced uniform initialization
    - Use {} to initialize all types

# Functions
In C/C++ programs the functions are sections of code with limited instructions and can return a value, Functions behavior are similar to 
the mathematics definition. 
