#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int a[205][205]={0};
    for(int i=1;i<=n;i++){
        a[1][i]=s[i-1]-'0';
    }
    for(int i=2;i<=n;i++){
        string s1;
        cin>>s1;
        for(int j=1;j<=n;j++){
            a[i][j]=s1[j-1]-'0';
        }
    }
    cout<<n<<" ";
    if(a[1][1]!=0) cout<<0<<" ";
    int cnt=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i][j]==a[i][j+1]){
                cnt++;
            }else{
                cout<<cnt<<" ";
                cnt=1;
            }
        }
        if(a[i][n]==a[i+1][1]){
            cnt++;
        }else{
            cout<<cnt<<" ";
            cnt=1;
        }
    }
    for(int j=1;j<n;j++){
        if(a[n][j]==a[n][j+1]){
            cnt++;
        }else{
            cout<<cnt<<" ";
            cnt=1;
        }
    }
    cout<<cnt<<" ";
    return 0;
}
//https://www.luogu.com.cn/problem/P1320