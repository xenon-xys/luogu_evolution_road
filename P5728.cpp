#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m[1005][5];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m[i][1]>>m[i][2]>>m[i][3];
        m[i][4]=m[i][1]+m[i][2]+m[i][3];
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(abs(m[i][4]-m[j][4])<=10&&
                abs(m[i][1]-m[j][1])<=5&&
                abs(m[i][2]-m[j][2])<=5&&
                abs(m[i][3]-m[j][3])<=5){
                cnt++;
            }

        }
    }
    cout<<cnt;
    cout<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5728
