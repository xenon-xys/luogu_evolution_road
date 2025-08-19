#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i=1;
    int sum=0;
    while(1){
        sum+=i;
        if(sum>n) break;
        i++;
    }
    sum-=i;
    int temp=n-sum;
    int ans=0;
    ans+=temp*i;
    i--;
    for(int j=1;j<=i;j++){
        ans+=j*j;
    }
    cout << ans;
    cout << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P2669