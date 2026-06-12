#include<iostream>
using namespace std;

void prime(int a){

    for(int i=2;i<=a;i++){
        if(a % i ==0)
        {
            cout<<"Its not a prime num"<<endl;
            break;
        }
        else
        {
            cout<<"Its a prime num"<<endl;
            break;
        }
    }
}

int main()
{
    int a;
    cout<<"Enter num: ";
    cin>>a;

    prime(a);

    return 0;
}
