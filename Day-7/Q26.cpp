#include <iostream>
using namespace std;

int fibonnaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
     else
        return fibonnaci(n-1)+ fibonnaci(n-2);
       
}

int main()
{
    int num;
    cout<<"Enter num: ";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        cout<<" "<<fibonnaci(i);
    }

    return 0;
}