#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int count = 0;
    for(int i=1;i<=n;i++){
        int temp = i;
        while(temp>0){
            if(temp % 10 == x){
                count++;
            }
            temp /= 10;
        }
    }
    cout << count;
    cout << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P1980