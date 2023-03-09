#include <iostream>
using namespace std;

int main ()
{
    float x, y;
    cout << "Enter first number: " ;
    cin >> x;
    cout << "\nEnter second number: ";
    cin >> y;
    if (x == y ) 
    {
        cout << "The two numbers are equal\n";
    }
    else if (x>y) 
    {
        cout << "The larger number is " << x;
    }
    else 
    {
        cout << "The larger number is " << y;
    }
    return 0;
}
