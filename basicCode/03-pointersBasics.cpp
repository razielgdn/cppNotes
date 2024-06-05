#include<iostream>

int main(void)
{   
   using namespace std;
   int var1 = 23;
   int var2 = 13;
   int *ptr = &var1; // this is the declaration and initialization of a pointer
   cout << "var1  access directly: " << var1 << endl;    
   cout << "var1  address: " << &var1 << endl;    
   cout << endl;
   cout << "var2 access directly:  " << var2 << endl;
   cout << "var2  address: " << &var2 << endl;    
   cout << endl;
   //ptr = &var1;
   cout << "the address of var1 is: " << ptr << endl;
   cout << "the value of var1 is: " << *ptr << endl;
   ptr = &var2;
   cout << endl;
   cout << "The address of var2  is: " << ptr << endl; // this prints the direction stored in pointer
   cout << "The value of var2  is: " << *ptr << endl; // with * you access to the value in the directon of ptr
   // Edit variable value by a pointer:
   cout << "Changing a variable by a pointer: \n *ptr= *ptr * 4; \n *ptr+=2; ";
   *ptr= *ptr * 4;
   *ptr+=2;
   cout << endl;
   cout << "The address of var2  is: " << ptr << endl; 
   cout << "The value of var2  is: " << *ptr << endl;
   // you can declare a pointer to a pointer:
   cout << endl;
   int **point2ptr= &ptr;
   cout << "The address of ptr  is: " << point2ptr << endl;
   cout << "The content of ptr  : " << *point2ptr << endl;
   cout << endl;
   cout << "The address of point2ptr  is: " << &point2ptr << endl;
   cout << endl;
   // In C++ 11 exists null pointer its use is at initialization or in execution time
   *point2ptr= NULL;
   ptr = NULL;
   cout << "The content of ptr  is: " << ptr << endl;
   cout << "The content of  point2ptr is: " << *point2ptr << endl;   
   
   return 0;
}
