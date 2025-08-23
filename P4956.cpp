#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // 7x+21k per week
    // 52 weeks
    // (7x+21k)*52
    // 364x+1092k
    int x=100;
    int k;
    while(x>0){
        if(x*364<n&&(n-364*x)%1092==0){
            k=(n-364*x)/1092;
            cout<<x<<endl<<k<<endl;
            break;
        }
        x--;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P4956