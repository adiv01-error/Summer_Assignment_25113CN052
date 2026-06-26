#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cout<<"Enetr string: ";
    cin>>str;

    reverse(str.begin(), str.end());

    cout<<"Reverse string is: "<<str<<endl;
    return 0;

}