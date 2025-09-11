#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[205][205];
    int cnt=0;
    bool flag=0;
    int i=1;
    int j=1;
    while(cnt<=n*n){
        int x;
        cin>>x;
        cnt+=x;
        for(int k=1;k<=x;k++){
            a[i][j]=flag;
            j++;
            if(j>n){
                i++;
                j=1;
            }
        }
        flag=flag==0?1:0;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1319