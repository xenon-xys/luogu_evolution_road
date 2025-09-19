#include <iostream>
#include <string>
using namespace std;
int countDigit(int x){
    if(x==0) return 1;
    int cnt=0;
    if(x<0){
        x=-x;
        cnt++;
    }
    while(x){
        x/=10;
        cnt++;
    }
    return cnt;
}
int main(){
    int i;
    cin>>i;
    getchar();
    char flag=' ';
    for(int j=1;j<=i;j++){
        string s;
        getline(cin,s); 

        if(s[0]=='a'){
            flag='a';
            s.erase(0,2);
        }else if(s[0]=='b'){
            flag='b';
            s.erase(0,2);
        }else if(s[0]=='c'){
            flag='c';
            s.erase(0,2);
        }
        if(flag=='a'){
            int k=0;
            int num1=0,num2=0;
            while(1){
                if(s[k]==' ') break;
                num1=num1*10+s[k]-'0';
                k++;
            }
            k++;
            for(;k<s.length();k++){
                num2=num2*10+s[k]-'0';
            }
            int ans=num1+num2;
            cout<<num1<<"+"<<num2<<"="<<ans<<endl;
            cout<<countDigit(num1)+countDigit(num2)+countDigit(ans)+2<<endl;
        }else if(flag=='b'){
            int k=0;
            int num1=0,num2=0;
            while(1){
                if(s[k]==' ') break;
                num1=num1*10+s[k]-'0';
                k++;
            }
            k++;
            for(;k<s.length();k++){
                num2=num2*10+s[k]-'0';
            }
            int ans=num1-num2;
            cout<<num1<<"-"<<num2<<"="<<ans<<endl;
            cout<<countDigit(num1)+countDigit(num2)+countDigit(ans)+2<<endl;
        }else if(flag=='c'){
            int k=0;
            int num1=0,num2=0;
            while(1){
                if(s[k]==' ') break;
                num1=num1*10+s[k]-'0';
                k++;
            }
            k++;
            for(;k<s.length();k++){
                num2=num2*10+s[k]-'0';
            }
            int ans=num1*num2;
            cout<<num1<<"*"<<num2<<"="<<ans<<endl;
            cout<<countDigit(num1)+countDigit(num2)+countDigit(ans)+2<<endl;
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1957
