// Q1 - Given a 2D matrix with m rows and n columns containing integers, find and print the maximum value present in the array.

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter total number of rows: ";
    cin>>m;
    cout<<"Enter total number of columns: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter elements of matrix:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int max = arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"The maximum element in matrix is: "<<max;

    return 0;
}