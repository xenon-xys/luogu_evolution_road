#include <iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int sum=0;
    for(int i=x;i<=x+n-1;i++){
        if(i%7==0||i%7==6){
            continue;
        }else{
            sum+=250;
        }
    }
    cout << sum << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1424