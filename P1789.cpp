#include <iostream>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[110][110]={0};
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        x+=2;
        y+=2;
        a[x][y-2]=1;
        a[x-1][y-1]=1;
        a[x][y-1]=1;
        a[x+1][y-1]=1;
        a[x-2][y]=1;
        a[x-1][y]=1;
        a[x][y]=2;
        a[x+1][y]=1;
        a[x+2][y]=1;
        a[x-1][y+1]=1;
        a[x][y+1]=1;
        a[x+1][y+1]=1;
        a[x][y+2]=1;
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        x+=2;
        y+=2;
        for(int j=x-2;j<=x+2;j++){
            for(int l=y-2;l<=y+2;l++){
                a[j][l]=1;
            }
        }
    }
    int ans=0;
    for(int i=3;i<=n+2;i++){
        for(int j=3;j<=n+2;j++){
            //cout<<a[i][j]<<" ";
            if(a[i][j]==0) ans++;
        }
        //cout<<endl;
    }
    cout<<ans;
    return 0;
}
//https://www.luogu.com.cn/problem/P1789