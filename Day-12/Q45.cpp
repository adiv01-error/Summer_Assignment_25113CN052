#include<iostream>
using namespace std;

void pallindrome(int n)
{
    int num =n;
    int rev=0;

    while(n!=0)
    {
        int rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }

    if(rev==num){
        cout<<"Its a Pallindrome";
    }
    else
       cout<<"Its not a pallindrome";

}

int main()
{
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    pallindrome(n);

    return 0;
}