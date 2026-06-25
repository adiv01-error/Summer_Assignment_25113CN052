#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout<<"Enter num of row: ";
    cin>>row;

    cout<<"Enter num of cols: ";
    cin>>col;

    int A[row][col];

    cout<<"Enter element of matrix A: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }

    for(int j=0;j<col;j++){
        int sum = 0;

        for(int i=0;i<row;i++){
            sum += A[i][j];
        }
        cout<<"Sum of columns"<<j+1<<": "<<sum<<endl;
    }
    return 0;
}