#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int day=1;
    for(int i=a;i>1;i/=2){
        day++;
    }
    cout<<day;
    return 0;
}
//https://www.luogu.com.cn/problem/P5720