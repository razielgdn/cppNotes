# Default Function Arguments

Default function arguments allow some or all function parameters to have predefined values. These values are used when the caller does not provide explicit arguments. This feature simplifies function calls and makes the code more flexible and concise.

## Key Points
- Optional Arguments: When default values are specified, it becomes optional for the caller to pass values for those arguments. If no value is provided, the default value is used.   

- Compiler Behavior: The compiler assigns the default value to the parameter if no explicit value is given. However, if an explicit value is provided, it overrides the default.   

- Order of Default Arguments: Default arguments must be specified from the rightmost side of the parameter list towards the left. This means you cannot have a parameter with a default value followed by one without.
   - Correct: def foo(a, b=10, c=20)
   - Incorrect: def foo(a=10, b)

- Simplified Invocation: Default arguments make function calls more straightforward by reducing the need for the caller to provide all arguments, especially when many have reasonable defaults.

## Best Practices

- **Use Default Arguments Wisely**: Only provide default values when they make sense and can cover common use cases.
- **Clarity**: Ensure that the use of default arguments does not obscure the function’s behavior or lead to misunderstandings.
- **Documentation**: Clearly document the default values in your function’s comments or documentation to inform users of the expected behavior.

By following these guidelines and using default arguments effectively, you can create more flexible, readable, and maintainable C++ code.

# Inline functions
Inline functions in C++ are a request to the compiler to insert the complete body of the function wherever it is called, rather than performing a regular function call. When an inline function is applied, the compiler substitutes the function call with the actual function instructions. This is not the same as a macro, but it works similarly by eliminating the call overhead.

# Macros
Macros are a feature of the C++ preprocessor that allow you to define constants, functions, or code snippets that are expanded before the actual compilation of the code. 
- Macros are defined using the #define directive.
- When the preprocessor encounters a macro, it replaces the macro with its definition.
Example of a Macro:
``` C++
#include <iostream>
#define SQUARE(x) ((x) * (x))
int main() {
    int num = 5;
    std::cout << "Square of " << num << " is " << SQUARE(num) << std::endl;
    return 0;
}
```
In the example the macro SQUARE(num) is substitude with ((x)*(x)).
Macros are used in conditional compilation. 
```C++
#ifdef DEBUG
#define LOG(msg) std::cout << msg << std::endl
#else
#define LOG(msg)
#endif
```

