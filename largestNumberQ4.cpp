//Q4-> Write a C++ program to find the largest element of a given 2D array of integers.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter the no of rows";
    cin>>m;
    int n;
    cout<<"enter the no of columns";
    cin>>n;
    int arr[m][n];
    //input
    for(int i=0;i<=m-1; i++){
        for(int j=0;j<=n-1; j++){
            cin>>arr[i][j];
        }
    }

    int max=INT_MIN;
    for(int i=0;i<=m-1;i++){
        for(int j=0; j<=n-1; j++){
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    cout<<max;
}