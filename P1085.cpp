#include <iostream>
using namespace std;
int main(){
    int a[7]={0};
    int max=0;
    for(int i=0;i<7;i++){
        int t1,t2;
        cin >> t1 >> t2;
        a[i]+=t1+t2;
        if(a[i]>max){
            max=a[i];
        }
    }
    if(max<=8){
        cout<<"0"<<endl;
    }else{
        for(int i=0;i<7;i++){
            if(a[i]==max){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1085