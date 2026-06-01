#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;
    int sum=0;

    for(int i=0; i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        cout<<"Its a Perfect number"<<endl;
    }
    else{
        cout<<"Its not a Perfect number"<<endl;
    }
    return 0;

}