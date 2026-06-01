#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int rem, sum=0, n;

    n=num;

    while(num!=0){
        rem = num%10;

        int fact =1;
        for(int i=0;i<=rem;i++){
            fact*=i;
        }
        sum += fact;
        num /= 10;

    }
    if(sum==n){
        cout<<"Its a Strong number"<<endl;
    }
    else{
        cout<<"Its not a Strong number"<<endl;
    }
    return 0;
}