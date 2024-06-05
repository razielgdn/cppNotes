#include <iostream>

int main (void)
{
   using namespace std;
   int array[] = {5,7,2,1,35,23,98,47,38,73};
  // int *first = std::begin(array);
  // int *last = std::end(array);
   int *first = begin(array);
   int *last = end(array);

   // Print the array by index
   cout << "Print the array by index\n";
   for (int i = 0; i < 10; i++)
   {
      cout << array[i] << " ";
   }
   cout << endl;
   cout << "Print the array by auto variable \n";
   // I am an embedded systems developer. I prefer not to use auto variables at all. 
   for (const auto & x: array)
   {
      cout << x << " ";
   }
   cout << endl;

   cout << "Print the array by pointers\n";
   while (first != last)
   {
      cout << *first << " ";
      ++first;
   }
   cout << endl;
   return 0;
}
