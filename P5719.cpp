#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a=0,b=0;
    int anum=0,bnum=0;
    for(int i=1;i<=n;i++){
        if(i%k==0) {a+=i;anum++;}
        else {b+=i;bnum++;}
    }
    double aavg=1.0*a/anum;
    double bavg=1.0*b/bnum;
    cout<<fixed<<setprecision(1)<<aavg<<" "<<fixed<<setprecision(1)<<bavg<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5719