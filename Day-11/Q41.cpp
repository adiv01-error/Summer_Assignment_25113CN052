#include<iostream>
using namespace std;


void sum(int a,int b)
{
   cout<<"Sum = "<<a+b<<endl;;
}

int main()
{
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    sum(a,b);

    return 0;
   
}