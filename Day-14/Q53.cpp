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

    int key;
    cout<<"Enter searching element: ";
    cin>>key;
    bool found = false;

    for(int i=0;i<n;i++){
        if(key==arr[i]){
            found = true;
            cout<<"Element found "<<i;
            break;
        }
    }
    if(!found){
        cout<<"Element not found";
    }
    return 0;

}