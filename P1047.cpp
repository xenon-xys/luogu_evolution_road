#include <iostream>
using namespace std;
int main(){
    int a[10005]={0};
    int l,m;
    cin>>l>>m;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        for(int j=u;j<=v;j++) a[j]=1;
    }
    int cnt=0;
    for(int i=0;i<=l;i++){
        if(a[i]==0) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1047