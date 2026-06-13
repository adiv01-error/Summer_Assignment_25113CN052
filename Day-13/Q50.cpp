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

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    float avg = (float)sum/n;

    cout<<"Average is: "<<avg<<endl;

    return 0;


}