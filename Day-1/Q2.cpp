#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    cout<<"Table is: "<< n <<endl;

    for(int i=0 ;i<=n;i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
    
    return 0;

}