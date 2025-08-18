#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int num1,price1,num2,price2,num3,price3;
    cin >> n >> num1 >> price1 >> num2 >> price2 >> num3 >> price3;
    int sum1 = ceil(1.0 * n / num1) * price1;
    int sum2 = ceil(1.0 * n / num2) * price2;
    int sum3 = ceil(1.0 * n / num3) * price3;
    if(sum1 <= sum2 && sum1 <= sum3){
        cout << sum1 << endl;
    }else if(sum2 <= sum1 && sum2 <= sum3){
        cout << sum2 << endl;
    }else{
        cout << sum3 << endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1909