#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[3005];
    for(int i=0;i<n;i++) cin>>a[i];
    int min=0x7fffffff;
    for(int i=0;i<n-m+1;i++){
        int sum=0;
        for(int j=i;j<i+m;j++){
            sum+=a[j];
        }
        if(sum<min) min=sum;
    }
    cout<<min;
    return 0;
}
//https://www.luogu.com.cn/problem/P1614