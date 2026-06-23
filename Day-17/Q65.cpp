#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter num of terms in arr1: ";
    cin>>a;
    int arr1[a];

    cout << "Enter array1 elements: ";
    for(int i = 0; i < a; i++)
    {
        cin >> arr1[i];
    }

    int b;
    cout<<"Enter num of terms in arr2: ";
    cin>>b;
 
    int arr2[b];

    cout << "Enter array2 elements: ";
    for(int i = 0; i < b; i++)
    {
        cin >> arr2[i];
    }

    int merged[a + b];

    for(int i = 0; i < a; i++)
    {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < b; i++)
    {
        merged[a + i] = arr2[i];
    }

    cout << "Merged array: ";

    for(int i = 0; i < a+b; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
    
}