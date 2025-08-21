#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[105];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(a[j]>a[i]) swap(a[j],a[i]);
        }
    }
    cout<<a[n]-a[1]<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5724
