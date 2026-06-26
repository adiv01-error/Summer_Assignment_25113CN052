#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[100];

    cout<<"Enter string: ";
    cin.getline(str, 100);
    
    int vowels=0, consonants=0;

    for(int i=0;i<str[i] != 0;i++){

        char ch = tolower(str[i]);

        if(ch == 'a'|| ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u' )
        {
            vowels++;
        }
        else if(ch>='a' && ch<='z'){
            consonants++;
        }
    }

    cout<<"No of vowles: "<<vowels<<endl;
    cout<<"No of consonants: "<<consonants<<endl;

    return 0;
}