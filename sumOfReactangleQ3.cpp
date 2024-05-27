//Q3-> Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
//rectangle from (l1,r1) to (l2, r2).
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

    int l1;
    cout<<"enter the l1 : ";
    cin>>l1;
    int r1;
    cout<<"enter the r1 : ";
    cin>>r1;

    int l2;
    cout<<"enter the l2 : ";
    cin>>l2;
    int r2;
    cout<<"enter the r2 : ";
    cin>>r2;

    int sum =0;
    int minr=l1;
    int maxr=l2;
    int minc=r1;
    int maxc=r2;
    for(int i=minr;i<=maxr; i++){
        for(int j=minc;j<=maxc; j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum;
}
