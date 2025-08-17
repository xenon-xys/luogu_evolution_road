#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    bool flag1 = false;
    bool flag2 = false;
    if(x%2==0) flag1 = true;
    if(x>4&&x<=12) flag2 = true;
    if(flag1&&flag2) cout<<"1"<<" "; else cout<<"0"<<" ";
    if(flag1||flag2) cout<<"1"<<" "; else cout<<"0"<<" ";
    if(flag1&&(!flag2)||(!flag1)&&flag2) cout<<"1"<<" "; else cout<<"0"<<" ";
    if((!flag1)&&(!flag2)) cout<<"1"<<endl; else cout<<"0"<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5710