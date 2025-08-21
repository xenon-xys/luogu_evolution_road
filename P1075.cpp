#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=n-1;;i--){
    //     if(n%i==0){
    //         cout<<i<<endl;
    //         return 0;
    //     }
    // }
    for(int i=2;;i++){
        if(n%i==0){
            cout<<n/i<<endl;
            return 0;
        }
    }
}
//https://www.luogu.com.cn/problem/P1075