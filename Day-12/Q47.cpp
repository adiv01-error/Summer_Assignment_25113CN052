#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int x = 0, y = 1, z;
    cout << x << " " << y << " ";

    for (int i = 3; i <= n; i++)
    {
        z = x + y;
        cout << z << " ";
        
        x = y;
        y = z;
    }
}

int main()
{
    int n;
    cout << "Enter num of terms: "<<endl;
    cin >> n;

    fibonacci(n);

    return 0;
}