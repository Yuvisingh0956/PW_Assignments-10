//Q3 - Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and column of that element to 0. Make the changes inplace and print the matrix.

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter total number of rows: ";
    cin>>m;
    cout<<"Enter total number of columns: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements of matrix:\n";   //taking input from user for the matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        } cout<<endl;
    }
    cout<<endl;

    bool first_row=false, first_col=false

    for(int i=0;i<n;i++){    //checking if first row has any zero or not
        if(arr[0][i]==0){
            first_row=true;
            break;
        }
    }

    for(int i=0;i<m;i++){   //checking if first column has any zero or not
        if(arr[i][0]==0){
            first_col=true;
            break;
        }
    }

    for(int i=0;i<m;i++){   //checking if zero is there in matrix and if yes then it's row and column first element is made zero
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    
    for(int i=1;i<m;i++){   //if first row or column element is zero then making whole row or column zero
        for(int j=1;j<n;j++){
            if(arr[i][0]==0 || arr[0][j]==0){
                arr[i][j]=0;
            }
        }
    }

    if(first_row==true){   //if first row has any zero then converting whole first row elements to zero
        for(int i=0;i<n;i++){
            arr[0][i]=0;
        }
    }

    if(first_col==true){   //if first column has any zero then converting whole first column elements to zero
        for(int i=0;i<m;i++){
            arr[i][0]=0;
        }
    }

    //printing the required matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}