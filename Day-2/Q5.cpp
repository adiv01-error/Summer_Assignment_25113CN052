#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int sum =0;

    while(num!=0)
    {
    int s = num%10;
    sum = sum + s;
    num = num/10;
    }

    cout<<"Sum of digit is: "<<sum<<endl;
}