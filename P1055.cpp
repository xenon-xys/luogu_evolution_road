#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum=(s[0]-'0')*1
    +(s[2]-'0')*2
    +(s[3]-'0')*3
    +(s[4]-'0')*4
    +(s[6]-'0')*5
    +(s[7]-'0')*6
    +(s[8]-'0')*7
    +(s[9]-'0')*8
    +(s[10]-'0')*9;
    int n=sum%11;
    if(n==10){
        if(s[12]=='X') cout<<"Right";
        else {
            s[12]='X';
            cout << s;
        }
    }else{
        if(s[12]==n+'0') cout<<"Right";
        else {
            s[12]=n+'0';
            cout << s;
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1055