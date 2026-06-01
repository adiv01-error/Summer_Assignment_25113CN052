#include<iostream>
using namespace std;
int main()


{
    int num;
    cout << "Enter number: ";
    cin >> num;

    int largestPrime = -1;

    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0) 
        {
            bool isPrime = true;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                largestPrime = i;
            }
        }
    }
    cout<<"Largest Prime Factor: "<<largestPrime;
}