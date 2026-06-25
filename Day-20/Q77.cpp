#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout<<"Enter num of row: ";
    cin>>row;

    cout<<"Enter num of cols: ";
    cin>>col;

    int A[row][col], B[row][col], k[row][col];

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
            k[i][j] = 0;

            for(int m=0;m<col;m++){
                k[i][j] += A[i][m] * B[m][j];
            }
            
        }
    }
    cout<<"Multiplication of Matrix is \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
