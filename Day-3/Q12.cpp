#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter a: ";
    cin >>a;
    cout<<"Enter b: ";
    cin >>b;

   int x = a;
   int y = b;


    while(y!=0){
        int temp = x;
        y= x%y;
        x = temp;
    }
    int gcd = x;
    int lcm = (a*b)/gcd;

    cout<<"LCM is: "<<lcm<<endl;
    return 0;
}