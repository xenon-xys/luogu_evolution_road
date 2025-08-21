#include <iostream>
#include <iomanip>
using namespace std;
double Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<Fibonacci(n)<<endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1720