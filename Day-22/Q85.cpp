#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;

    cout<<"Enter string: ";
    cin>>str;

    int st = 0;
    int end = str.length()-1;
    bool palindrome = true;


    while(st<end){
        if(str[st] != str[end]){
            palindrome = false;
            break;
        }
        st++;
        end--;

    }
    if(palindrome){
        cout<<"Its a Palindrome";
    }
    else 
        cout<<"Its not a Palindrome";

    return 0;
}