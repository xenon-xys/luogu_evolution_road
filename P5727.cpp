#include <iostream>
using namespace std;
int main(){
    int a[1000];
    int n;
    cin>>n;
    int i=0;
    while(1){
        a[i]=n;
        if(n==1) break;
        if(n%2==0){
            n/=2;
            i++;
        }else{
            n=n*3+1;
            i++;
        }
    }
    for(i;i>=0;i--){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5727
