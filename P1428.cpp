#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[105];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]) ans++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1428