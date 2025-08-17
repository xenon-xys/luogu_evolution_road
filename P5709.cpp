#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m,t,s;
    cin >> m >> t >> s;
    if(t==0){
        cout<<0<<endl;
        return 0;
    }
    int eaten = ceil(1.0*s/t);
    if(eaten>=m){
        cout<<0<<endl;
    }else{
        cout<<m-eaten<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5709