#include <iostream>

int main()
{
  using namespace std;
  int var1; // not initialized value
  int var2(3); // variable initialized with 3
  int var3 =0; // variable initialized with 0
  cout << "variable 1 value: "<< var1 << endl;
  cout << "variable 2 value: "<< var2 << endl;
  cout << "variable 3 value: "<< var3 << endl;

  char strA[] = {'Z','r','a','X','3'};
  char strArray[8] = {"Hello"};
  unsigned int numbers[10] = {0};

  cout << "strA value: "<< strA << endl;
  cout << "strArray value: "<< strArray << endl;
  cout << "numbers value: " << endl;
  unsigned int i;
  for ( i = 0; i < 10; i++)
  {
    cout << numbers[i] << " ";
  }    
  cout  << endl;
  int var4{};
  char *stpoint = strArray;  
  for ( i = 0; i < 8; i++)
  {
    cout << *stpoint++ << " ";
  }    
  
  return 0;
}