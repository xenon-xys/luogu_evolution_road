#include <iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    int num[100]={0};
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                num[i+j+k]++;
            }
        }
    }
    int max=0;
    int ans;
    for(int i=1;i<=s1+s2+s3;i++){
        if(num[i]>max){
            max=num[i];
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
//https://www.luogu.com.cn/problem/P2911
