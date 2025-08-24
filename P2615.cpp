#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[40][40]={0};
    int x=0;
    int y=(n-1)/2;
    a[x][y]=1;
    for(int i=2;i<=n*n;i++){
        if(x==0&&y!=(n-1)){
            x=n-1;
            y++;
            a[x][y]=i;
            continue;
        }else if(x!=0&&y==(n-1)){
            x--;
            y=0;
            a[x][y]=i;
            continue;
        }else if(x==0&&y==(n-1)){
            x++;
            a[x][y]=i;
            continue;
        }else{
            if(a[x-1][y+1]==0){
                x--;
                y++;
                a[x][y]=i;
                continue;
            }else{
                x++;
                a[x][y]=i;
                continue;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P2615