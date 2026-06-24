#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter num of terms: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array terms: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int st=0;
    int end = n-1;
    int target;
    cout<<"Enter value to find: ";
    cin>>target;

    while(st<=end)
    {
        int mid = st + (end - st) / 2;

        if(arr[mid] == target){
            cout<<"Target found at index "<<mid;
            return 0;
        }
        else if(target > arr[mid]){
            st = mid +1;  
        }
        else{
            end = mid -1;
        }  
    }
    cout << "Target not found "<<endl;
    return 0;   

}