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

cout<<"Even num: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
cout<<"\nOdd num: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0)
           cout<<arr[i]<<" ";
    }

 return 0;
}