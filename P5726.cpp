#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    int a[1005];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=i;j<=n;j++){
            if(a[j]<a[k]) k=j;
        }
        swap(a[i],a[k]);
    }
    for(int i=2;i<n;i++){
        sum+=a[i];
    }
    double ans=sum/(n-2);
    cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5726