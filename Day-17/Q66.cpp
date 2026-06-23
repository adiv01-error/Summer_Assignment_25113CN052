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

    cout<<"Union of arrays: ";

    for(int i=0;i<a;i++){
        cout<<arr1[i]<<" ";
    }

    for(int i=0;i<b;i++){
        bool found = false;

        for(int j=0;j<a;j++){
            if(arr2[i]==arr1[j]){
                found = true;
                break;
            }  
        }
        if(!found){
            cout<<arr2[i]<<" ";
        }
    }
    return 0;
}