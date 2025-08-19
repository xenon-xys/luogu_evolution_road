#include <iostream>
using namespace std;
int a[100]={1},b[100]={0};
void add(){
    for(int i=0;i<100;i++){
        b[i]+=a[i];
        if(b[i]>=10){
            b[i+1]+=b[i]/10;
            b[i]%=10;
        }
    }
}
void multiply(int j){
    int t=0;
    for(int i=0;i<100;i++){
        int temp=a[i]*j+t;
        a[i]=temp%10;
        t=temp/10;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            multiply(j);
        }
        add();
        for(int j=0;j<100;j++){
            a[j]=0;
        }
        a[0]=1;
    }
    int i=99;
    for(;i>=0;i--){
        if(b[i]!=0) break;
    }
    for(int j=i;j>=0;j--){
        cout<<b[j];
    }
    cout << endl;
    return 0;
}