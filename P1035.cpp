#include <iostream>
using namespace std;
int main(){
    double k;
    cin >> k;
    double sum=0;
    for(int i=1;;i++){
        sum += 1.0 / i;
        if(sum > k){
            cout << i;
            break;
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1035