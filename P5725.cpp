#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<setw(2)<<setfill('0')<<i*n+j;
        }
        cout<<endl;
    }
    cout<<endl;
    int num=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            num++;
            cout<<setw(2)<<setfill('0')<<num;
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5725