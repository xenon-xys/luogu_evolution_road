#include <iostream>
using namespace std;
int n;
char a[15][15];
char b[15][15];
bool function1(){
    char c[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=a[n+1-j][i];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool function2(){
    char c[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=a[n+1-i][n+1-j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool function3(){
    char c[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=a[j][n+1-i];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool function4(){
    char c[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=a[i][n+1-j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool function5(){
    char c[15][15];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            c[i][j]=a[i][n+1-j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=c[i][j];
        }
    }
    if(function1()||function2()||function3()){
        return true;
    }
    return false;
}
bool function6(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]!=b[i][j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>b[i][j];
        }
    }
    if(function1()){
        cout<<1;
    }else if(function2()){
        cout<<2;
    }else if(function3()){
        cout<<3;    
    }else if(function4()){
        cout<<4;
    }else if(function5()){
        cout<<5;
    }else if(function6()){
        cout<<6;
    }else{
        cout<<7;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P1205