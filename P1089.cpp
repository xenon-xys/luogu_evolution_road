#include <iostream>
using namespace std;
int main(){
    int res=0;
    int savecnt=0;
    for(int i=1;i<=12;i++){
        int x;
        cin>>x;
        int temp=300-x;
        res+=temp;
        if(res>=100){
            savecnt+=res/100;
            res=res%100;
        }
        if(res<0){
            cout<<"-"<<i<<endl;
            return 0;
        }
    }
    savecnt*=120;
    savecnt+=res;
    cout<<savecnt<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1089