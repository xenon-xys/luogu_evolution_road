#include <iostream>
using namespace std;
bool judge(int n){
    for(int j=2; j*j<=n; j++){
        if(n%j==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(judge(i)){
            int a[10]={0},b[10]={0};
            int temp=i;
            int index=0;
            while(temp){
                a[index]=temp%10;
                b[9-index]=temp%10;
                temp/=10;
                index++;
            }
            bool flag=true;
            for(int j=0;j<index;j++){
                if(a[j]!=b[10-index+j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1217