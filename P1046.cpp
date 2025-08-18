#include <iostream>
using namespace std;
int main(){
    int a[10];
    int n;
    int sum=0;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    cin>>n;
    n+=30;
    for(int i=0;i<10;i++){
        if(a[i]<=n) sum+=1;
    }
    cout<<sum<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1046