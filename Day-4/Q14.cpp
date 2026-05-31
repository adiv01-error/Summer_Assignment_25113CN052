#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter terms: ";
    cin>>num;
    int fib;
    int first =0,  second = 1;;
    
    if(num==1){
        cout<<"Nth fib term: "<<first;

    }
    else if(num==2)
       cout << "Nth Fib term: " << second;
    else
    {
        for (int i = 3; i <= num; i++)
        {
            fib = first + second;
            first = second;
            second = fib;
        }
        cout<<"Fib term is: "<<fib;
    }
    return 0;

}