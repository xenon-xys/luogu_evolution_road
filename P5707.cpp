#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int s,v;
    cin >> s >> v;
    int n = (8+24)*60;
    int t = ceil(s*1.0/v)+10;
    n-= t;
    if(n>=24*60){
        n-=24*60;
    }
    int h = n/60;
    int m = n%60;
    cout<<setw(2)<<setfill('0')<<h<<":";
    cout<<setw(2)<<setfill('0')<<m<<endl;
}
//https://www.luogu.com.cn/problem/P5707