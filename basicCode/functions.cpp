# include <iostream>

int sum(int a, int b);


int main( void )
{
    using namespace std;
    int x=0; 
    int y=0;
    cout << "This program operates arithmetic operations to demostrate functions use\n";
    cout << "Introduce number one: \n";
    cin >> x;
    cout << "Introduce number two: \n";
    cin >> y;

    int sumData;
    sumData = sum(x, y);
    cout << "The result of the sum of " << x <<  " and " << y << " is: " << sumData << "\n"; 

    return 0;
}

int sum( int a , int b)
{
    int result = 0;
    result = a + b;
    return result;
}