#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter string: ";
    cin.getline(str, 100);

    for(int i=0;str[i] != 0;i++){
        
        str[i]=toupper(str[i]);
    }
    cout<<"Uppercase String: "<<str<<endl;
    return 0;
}


