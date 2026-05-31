#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter terms: ";
    cin>>num;
    int fib;
    int first =0;
    int second = 1;

    cout<<"Fibonacci series: ";


    while(num!=0){

    cout<<first<<" ";

    fib = first + second;
    first = second;
    second = fib;

    num --;
    }
    return 0;
    
}
