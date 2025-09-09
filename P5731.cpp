#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[15][15]={0};
    int row=1;
    int column=1;
    a[row][column]=1;
    int x=2;
    while(x<=n*n){
        while(column<n&&a[row][column+1]==0){
            column++;
            a[row][column]=x;
            x++;
        }
        
        while(row<n&&a[row+1][column]==0){
            row++;
            a[row][column]=x;
            x++;
        }
        
        while(column>1&&a[row][column-1]==0){
            column--;
            a[row][column]=x;
            x++;
        }
        while(row>1&&a[row-1][column]==0){
            row--;
            a[row][column]=x;
            x++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<setw(3)<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5731