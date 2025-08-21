#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[10]={0};
    if(n>0){
        int digit=0;
        for(int i=0;n>0;i++){
            a[i]=n%10;
            n/=10;
            digit++;
        }
        bool flag=false;
        for(int i=0;i<digit;i++){
            if(a[i]!=0){
                flag=true;
            }
            if(flag){
                cout<<a[i];
            }
        }
    }else if(n<0){
        cout<<"-";
        n=-n;
        int digit=0;
        for(int i=0;n>0;i++){
            a[i]=n%10;
            n/=10;
            digit++;
        }
        bool flag=false;
        for(int i=0;i<digit;i++){
            if(a[i]!=0){
                flag=true;
            }
            if(flag){
                cout<<a[i];
            }
        }
    }else{
        cout<<"0"<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1307