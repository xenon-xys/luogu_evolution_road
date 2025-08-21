#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int max=1;
    int temp=1;
    for(int i=2;i<=n;i++){
        if(a[i]==a[i-1]+1){
            temp++;
        }else{
            max=(max>temp?max:temp);
            temp=1;
        }
    }
    max=(max>temp?max:temp);
    cout<<max<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1420