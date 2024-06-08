#include <iostream>

void Print (int *ptr);

int main (){
   using namespace std;
   const float PI=3.1416;
   float radius = 0;
   cout << "Next program calculates cycle diameter and area:" << endl;
   cout << "Introduce radius:  ";
   cin >> radius;
   //cout << endl;
   float circumference = PI*radius*2;
   float area = 2*PI*radius*radius;
   cout << "Circumference is: " << circumference << endl;
   cout << "Area is: " << area << endl;
   int x = 23;
   const int *const ptr = &x;
   int *ptr2 = NULL;
   cout << "pointer ptr address: " << ptr << endl;
   cout << "pointer ptr value: " << *ptr << endl;
   // cout << endl;
   Print(&x);
   // ptr = &x;
   const int  value = 9;
   ptr2 = (int *)&value;
 //  value =6; this can be executed
   cout << "pointer ptr2 value: " << *ptr2 << endl;
   *ptr2 = 34; // with this you can change value
   cout << "pointer ptr2 value: " << *ptr2 << endl;



   return 0;
}

void Print (int *ptr) 
{
   using namespace std;
   cout<< *ptr << endl;   
}