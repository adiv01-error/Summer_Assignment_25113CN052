#include<iostream>
using namespace std;

int main()
{

    char str[100];

    cout<<"Enetr string: ";
    cin.getline(str, 100);

    int count = 0;

    while(str[count] != '\0')
    {
        count++;
    }

    cout<<"Length of String: "<<count<<endl;
    return 0;

}
