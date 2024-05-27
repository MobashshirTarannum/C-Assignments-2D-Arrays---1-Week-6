//Q2->Write a program to add two matrices and save the result in one of the given matrices.
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
     int p;
    cout<<"enter the no of rows";
    cin>>p;
    int q;
    cout<<"enter the no of columns";
    cin>>q;
    int brr[p][q];
    //input
    for(int i=0;i<=p-1; i++){
        for(int j=0;j<=q-1; j++){
            cin>>brr[i][j];
        }
    }
    //output
     for(int i=0;i<=m-1; i++){
        for(int j=0;j<=n-1; j++){
            cout<<(arr[i][j] + brr[i][j])<<" ";
        }
        cout<<endl;
    }
}