#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter size of first array: ";
    cin >> a;

    int arr1[a];

    cout << "Enter first array elements: ";
    for(int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    int b;
    cout << "Enter size of second array: ";
    cin >> b;

    int arr2[b];

    cout << "Enter second array elements: ";
    for(int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    cout << "Common elements: ";

    bool found = false;

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout << "No common elements";
    }

    return 0;
}