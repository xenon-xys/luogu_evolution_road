#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int a=(s[i]-'a'+n)%26;
        s[i]='a'+a;
    }
    cout<<s;
    return 0;
}
//https://www.luogu.com.cn/problem/P1914