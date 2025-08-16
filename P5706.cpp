#include <iostream> 
#include <iomanip>

using namespace std;
int main(){
    double t;
    int n;
    cin >> t >> n;
    double ans1 = t/n;
    int ans2 = 2*n;
    cout << fixed << setprecision(3) << ans1 << endl;
    cout << ans2 << endl;
    return 0;

}
//https://www.luogu.com.cn/problem/P5706