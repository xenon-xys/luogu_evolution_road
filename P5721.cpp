#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            num++;
            cout<<setw(2)<<setfill('0')<<num;
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5721