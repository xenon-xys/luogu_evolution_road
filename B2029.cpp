#include <iostream>
#include <cmath>
#define PI 3.14
#define N 20000
using namespace std;
int main(){
    int h,r;
    cin >> h >> r;
    double s = PI*r*r*h;
    int ans=ceil(N/s);
    cout<<ans<<endl;
}
//https://www.luogu.com.cn/problem/B2029