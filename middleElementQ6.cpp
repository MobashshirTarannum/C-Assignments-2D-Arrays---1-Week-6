//Q6->Write a function which accepts a 2D array of integers and its size as arguments and displays the
//elements of middle row and the elements of middle column.
#include<iostream>
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

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i == n/2 || j == n/2) 
            cout<<arr[i][j]<<" ";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
