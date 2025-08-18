#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[105]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=1005;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<min;
    return 0;
}
//https://www.luogu.com.cn/problem/P5718