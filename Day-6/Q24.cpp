#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter base (x): ";
    cin >> x;

    long long result = 1;
    
    int n;
    cout << "Enter exponent (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result = result * x;
    }

    cout << x << "^" << n << " = " << result;

    return 0;
}