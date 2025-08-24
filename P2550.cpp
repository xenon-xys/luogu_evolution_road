#include <iostream>
using namespace std;
int main(){
    int n;
    int cor[7];
    int ans[7]={0};
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>cor[i];
    }
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j<=7;j++){
            int x;
            cin>>x;
            for(int k=0;k<7;k++){
                if(x==cor[k]){
                    cnt++;
                    break;
                }
            }
        }
        ans[7-cnt]++;
    }
    for(int i=0;i<7;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P2550