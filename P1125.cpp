#include <iostream>
#include <string>
using namespace std;
int cnt[26]={0};
bool isPrime(int x){
    if(x<=1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        cnt[s[i]-'a']++;
    }
    int maxn=0;
    int minn=1e9;
    for(int i=0;i<26;i++){
        if(cnt[i]>maxn) maxn=cnt[i];
        if(cnt[i]<minn&&cnt[i]!=0) minn=cnt[i];
    }
    int temp=maxn-minn;;
    if(isPrime(temp)){
        cout<<"Lucky Word"<<endl;
        cout<<temp<<endl;
    }else{
        cout<<"No Answer"<<endl;
        cout<<0<<endl;
    }
    return 0;
}