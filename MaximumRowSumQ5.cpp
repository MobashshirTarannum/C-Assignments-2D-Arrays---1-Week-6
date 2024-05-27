//Q5->Write a program to print the row number having the maximum sum in a given matrix.
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
   
    int max=0;
    int rowno = 0;
    for(int i=0;i<=m-1; i++){
        int sum=0;
        for(int j=0;j<=n-1; j++){
            sum += arr[i][j];
            if(sum>max){
                rowno=i+1;
                max=sum;
            }
        }
    }
    cout<<rowno;
}