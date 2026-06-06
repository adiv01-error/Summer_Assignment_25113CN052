#include <iostream>
using namespace std;

int main()
{
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = 0, base = 1;
    int rem;

    while (binary > 0)
    {
        rem = binary % 10;
        decimal = decimal + rem * base;
        base = base * 2;
        binary = binary / 10;
    }

    cout << "Decimal equivalent: " << decimal;

    return 0;
}