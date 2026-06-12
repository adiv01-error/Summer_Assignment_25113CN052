#include<iostream>
using namespace std;

void max(int a, int b){

    if(a>b){
        cout<<"a is maximum";
    }
    else
        cout<<"b is maximum";
}

int main()
{
    int a,b;
    
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    max(a,b);

    return 0;
}