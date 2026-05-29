#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int rev =0;
    int originalNum = num;

    while(num!=0)
    {
        int digit = num % 10;
        rev = rev*10 + digit ; 
        num = num/10;
    }
    if(rev==originalNum){
        cout<<"Number is Pallindrome"<<endl;
    }
    else{
        cout<<"Not a Palllindrome"<<endl;
    }
    return 0;
}