#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout<<"Enter num of row: ";
    cin>>row;

    cout<<"Enter num of cols: ";
    cin>>col;

    int A[row][col], B[row][col], Sum[row][col];

    cout<<"Enter element of first matrix: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter element of second matrix: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            Sum[i][j]= A[i][j] + B[i][j];
        }
    }
    cout<<"Sum of 2 matrices\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<Sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    


}