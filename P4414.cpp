#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    std::string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') cout<<a<<" ";
        if(s[i]=='B') cout<<b<<" ";
        if(s[i]=='C') cout<<c<<" ";
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P4414