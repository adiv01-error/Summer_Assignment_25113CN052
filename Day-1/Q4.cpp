#include<iostream>
using namespace std;
int main()
{
   int num;
    cout<<"Enter value of n: ";
    cin>>num;
    int count =0;
    
    while(num!=0){
        num = num/10;
        count++;
    }
    cout << "No Of Digits: " << count<<endl;

    return 0;
}
