#include <iostream>
using namespace std;
int main()
{
   int num;
    cout<<"Enter terms: ";
    cin>>num;
    int n = num;
    
    
    for(int i=0;i<=num;i++){
        int num=i;
        int sum=0, rem;


        while(num!=0){
           rem = num%10;
           sum = sum+(rem*rem*rem);
           num = num/10;
        }
        
        if(sum==i){
            cout<<"Fibonacci numbers: "<<sum<<endl;
        }
    }
    return 0;
}