#include<iostream>
#include<vector>
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

    cout<<"Before reverse: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

    int st = 0;
    int end = n-1;

    while(st<end)
    {
        int temp = arr[st];
        arr[st]=arr[end];
        arr[end]= temp;

        st++;
        end--;
    }
    cout<<"Reverse array: ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;

}