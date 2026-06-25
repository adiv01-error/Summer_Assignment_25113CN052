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
    bool symmetric = true;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(A[i][j] != A[j][i]){
                symmetric = false;
                break;
            }
        }
    }
    if(symmetric){
        cout<<"It is a Symmetric Matrix";
    }
    else 
        cout<<"Its not a symmetric matrix";

    return 0;
    
}