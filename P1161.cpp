#include <iostream>
#include <cmath>
bool vis[2000005]={false};
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        double a;
        int t;
        cin>>a>>t;
        for(int j=1;j<=t;j++){
            int index=floor(j*1.0*a);
            vis[index]=!vis[index];
        }
    }
    int x=1;
    while(1){
        if(vis[x]){
            cout<<x<<endl;
            return 0;
        }
        x++;
    }
}
//https://www.luogu.com.cn/problem/P1161