//由于你没有高斯聪明，所以你不被允许使用等差数列求和公式直接求出答案。
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout << sum;
    cout << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5722