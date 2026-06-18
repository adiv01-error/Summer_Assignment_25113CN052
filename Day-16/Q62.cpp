#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array number: ";
    cin>>n;

    int arr[n-1];

    cout<<"Enter array elements: ";
    for(int i=0; i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       arr[i]=arr[i+1];
    } 
    
    int maxFreq = 0;
    int maxElement;

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxFreq)
        {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum frequency element: " << maxElement << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}