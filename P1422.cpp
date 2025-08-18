#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    double sum=0;
    if(n<=150){
        sum=n*0.4463;
        cout << fixed << setprecision(1) << sum << endl;
    }else if(n<=400){
        sum=150*0.4463+(n-150)*0.4663;
        cout << fixed << setprecision(1) << sum << endl;
    }else{
        sum=150*0.4463+250*0.4663+(n-400)*0.5663;
        cout << fixed << setprecision(1) << sum << endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1422