#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter terms: ";
    cin>>num;
    int n = num;
    int rem, sum=0;

   while(num!=0){
    rem = num%10;
    sum = sum + (rem*rem*rem);
    num = num/10;

   }
   if(sum==n){
    cout<<"Its a Armstrong number"<<endl;
   }
   else{
    cout<<"Its not a Armstrong number"<<endl;
   }
   return 0;
    
}