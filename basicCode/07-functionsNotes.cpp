#include <iostream>

/*
function prototypes:
*/
//function with default arguments
int searchFunc(char *key, int *array, int len=10, int startIndex=0, int endIndex=9);

//inline function:

inline int square(int x)
{
   return x*x;
}
// overloading 
inline float square (float f)
{
   return f*f;
}

/* 
main function 
 */
int main (void){
   char    typeChar = 'B';
   int     iterations=0;
   int     dataArray[10]={12,78,45,98,65,25,45,74,91,65};
   int     secondArray[5]={129,35,78,96,65};   
   std::cout << "Program init..." << std::endl;
   std::cout << "Fuction parameters: character to search, array, array len, start index, end index " << std::endl;   
   iterations = searchFunc(&typeChar, secondArray, 5, 1, 3);
   std::cout << "The character \'" << typeChar <<"\' is present?  " << iterations << std::endl;
   typeChar = 'A';
   iterations = searchFunc(&typeChar, dataArray);
   std::cout << "The character \'" << typeChar <<"\' is present?  " << iterations << std::endl;
   //std::cout << " " << std::endl;
   int var1=10, result=0.0;
   float var2=10.0, result2=0.0;
   
   
   return 0;
}

/*
The search function finds the first occurrence of a character converted to an integer within a specified range of an integer array.
If the character is not present, the function returns -1.
Parameters:
- key: the character value to find
- array: pointer to the array where the key will be searched
- len: length of the array
- startIndex: starting position to search in the array
- endIndex: last position to search in the array (inclusive)
*/

int searchFunc(char *key, int *array, int len, int startIndex, int endIndex)
{  
   int *endPos=(array+endIndex);
   array += startIndex; //* sizeof(int);    
   if (endIndex < len)
   {
      std::cout << "end direction:" << endPos << std::endl; 
      std::cout << "end value:" << *endPos << std::endl;
      while ( array < endPos )      {         
            std::cout << "direction: " << array << std::endl;
            std::cout << "value " << *array << std::endl;
            if (*array == (int)(*key) )
            {
               return *array;
            }            
            ++array;
      }      
   }   
   return -1;

}