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

    bool found = false;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;i<n;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate find: "<<arr[i]<<endl;
                found = true;
                break;
            }  
        }
    }
    if(!found){
        cout<<"Duplicate element not found";
    }
    return 0;

}