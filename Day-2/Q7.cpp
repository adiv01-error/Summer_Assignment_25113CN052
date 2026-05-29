#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int product = 1;

    while(num!=0)
    {
    int s = num%10;
    product = product * s;
    num = num/10;
    }
    cout<<"Product is: "<<product<<endl;
    return 0;
}