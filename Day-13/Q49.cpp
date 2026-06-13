#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter num of terms: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Elements are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;

        
    }
    return 0;
}