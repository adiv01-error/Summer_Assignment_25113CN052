#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a: ";
    cin >>a;
    cout<<"Enter b: ";
    cin >>b;

    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout<<"GCD is: "<<a<<endl;

    return 0;

}