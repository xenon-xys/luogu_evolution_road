#include <iostream>
using namespace std;
int main(){
    int cube[25][25][25]={0};
    int w,x,h;
    cin>>w>>x>>h;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++){
            for(int j=y1;j<=y2;j++){
                for(int k=z1;k<=z2;k++){
                    cube[i][j][k]++;
                }
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=w;i++){
        for(int j=1;j<=x;j++){
            for(int k=1;k<=h;k++){
                if(cube[i][j][k]==0){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
    cout<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5729
