#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter value: ";
    cin>>num;
    
    for(int i=2;i<num;i++){
        if (num % i == 0){
            cout<<"Number is not Prime "<<endl;
            break;
        }
        else{
         cout<<"Number is Prime"<<endl;
         break;
        }
    }
    return 0;
}