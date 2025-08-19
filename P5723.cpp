#include <iostream>
using namespace std;
bool judge(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int l;
    cin >> l;
    int sum = 0;
    int count=0;
    for(int i=2;;i++){
        if(judge(i)){
            sum+=i;
            if(sum>l){
                break;
            }
            cout<<i<<endl;
            count++;
        }
        
    }
    cout << count;
    cout << endl;
    return 0;
}
//https://www.luogu.com.cn/problem/P5723