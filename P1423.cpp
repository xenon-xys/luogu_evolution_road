#include <iostream>
using namespace std;
int main()
{
    double s;
    cin >> s;
    int step = 0;
    double sum = 0;
    for(double i=2.0;sum<s;i*=0.98){
        sum += i;
        step++;
    }
    cout << step;
    cout << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1423