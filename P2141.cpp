#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[105];
    int num[20000]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            num[a[i]+a[j]]++;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(num[a[i]]) ans++;
    }
    cout<<ans;
    return 0;
}
//https://www.luogu.com.cn/problem/P2141