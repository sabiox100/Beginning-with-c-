#include <iostream>
using namespace std;

int main () 
{
    char c;
    cout << "Enter character: " ;
    cin >> c;
    int asciiValue = (int)c;
    cout << "The ASCII value of "<< c << " is " << asciiValue << "\n";
    return 0;
}
