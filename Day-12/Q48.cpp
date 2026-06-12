#include <iostream>
using namespace std;

void perfect_num(int n)
{
    int sum =0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Its a perfect number";
    }
    else
       cout<<"Its not a perfect number";
}

int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    perfect_num(n);

    return 0;
}