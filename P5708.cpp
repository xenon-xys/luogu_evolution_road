#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double p=(a+b+c)/2.0;
    double s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(1) << s << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5708