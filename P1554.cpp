#include <iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int num[10]={0};
    for(int i=m;i<=n;i++){
        int t=i;
        while(t){
            num[t%10]++;
            t/=10;
        }
    }
    for(int i=0;i<10;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1554