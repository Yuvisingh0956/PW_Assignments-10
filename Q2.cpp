//Q2 - You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in clockwise direction. You need to do it in-place i.e. you are not allowed to make a new matrix and allocate the elements to it. Make the changes in the same matrix and print it.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows/columns of square matrix: ";
    cin>>n;

    int arr[n][n];
    cout<<"Enter elements of matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    //swapping elements except diagonal elements
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    //swapping diagonal elements
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(arr[i][j], arr[i][n-j-1]);
        }
    }
    cout<<endl;

    //priting the required matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}