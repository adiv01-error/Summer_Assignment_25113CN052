#include<iostream>
using namespace std;

void armstrong(int n)
{
    int num =n;
    int rev=0;

    while(n!=0)
    {
        int rem = n%10;
        rev = rev+(rem*rem*rem);
        n=n/10;
    }

    if(rev==num){
        cout<<"Its a Armstrong number";
    }
    else
       cout<<"Its not a Armstrong number";

}

int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    armstrong(n);

    return 0;
}