#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int binary[32];
    int i=0;
     
    if(num==0){
        cout<<"Binary = 0";
        return 0;
    }
    
    while(num>0){
        binary[i] = num%2;
        num = num/2;
        i++;
    }

    cout<<"Binary form: ";
    for(int j=i-1; j>=0; j--){
        cout<<binary[j];
    }
    return 0;

}