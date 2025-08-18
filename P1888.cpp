#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    int x=a;
    int y=c;
    while(true){
        if(y%x==0) break;
        int z=y;
        y=x;
        x=z%x;
    }
    cout<<a/x<<"/"<<c/x<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1888