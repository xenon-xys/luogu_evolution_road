#include <iostream>
using namespace std;
int main(){
    int a[105];
    int i=0;
    for(;;i++){
        cin>>a[i];
        if(a[i]==0){
            break;
        }
    }
    for(int j=i-1;j>=0;j--){
        cout<<a[j]<<" ";
    }
    cout<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1427