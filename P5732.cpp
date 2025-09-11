#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[25]={0};
    int b[25]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                a[j]=1;
                cout<<a[j]<<" ";
            }
            else{
                a[j]=b[j]+b[j-1];
                cout<<a[j]<<" ";
            }
        }
        for(int j=1;j<=i;j++){
            b[j]=a[j];
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5732