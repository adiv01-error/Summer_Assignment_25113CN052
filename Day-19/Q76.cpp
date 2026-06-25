#include<iostream>
using namespace std;

int main()
{
    int row, col;
    
    cout<<"Enter num of row: ";
    cin>>row;

    cout<<"Enter num of cols: ";
    cin>>col;

    int A[row][col], k[row][col], sum;

    cout<<"Enter element of matrix A: \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==j){
                sum += A[i][j];
            }
        }
    }
    cout<<"Sum of Diagnol: "<<sum;
    return 0;
}
    
    