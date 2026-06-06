#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count =0;

    while (num > 0)
    {
        if (num % 2 == 1)
            count++;

        num = num / 2;
    }

    cout << "Number of set bits = " << count;

    return 0;
}