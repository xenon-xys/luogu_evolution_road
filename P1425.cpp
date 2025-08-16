#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int n=(c*60+d)-(a*60+b);
    int h = n/60;
    int m = n%60;
    cout<<h<<" "<<m<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1425