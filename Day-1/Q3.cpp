#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value of n: ";
    cin>>num;
    int fact =1;

    for (int i=1; i<=num;i++){
        fact = fact *i;

    }
    cout<<"Factorial is: "<<fact<<endl;
    return 0;
}