#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter required sum: ";
    cin >> sum;

    bool found = false;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"Sum of Pair: "<<arr[i]<<","<<arr[j]<<endl;;
                found = true;
            }
        }
    }
    if(!found){
        cout<<"No pair found"<<endl;

    }
    return 0;

}
