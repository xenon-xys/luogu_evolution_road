#include <iostream>
#include <cmath>
using namespace std;
// bool palindrome(int n){
//     // int a[10]={0},b[10]={0};
//     // int temp=n;
//     // int index=0;
//     // while(temp){
//     //     a[index]=temp%10;
//     //     b[9-index]=temp%10;
//     //     temp/=10;
//     //     index++;
//     // }
//     // for(int j=0;j<index;j++){
//     //     if(a[j]!=b[10-index+j]){
//     //         return false;
//     //     }
//     // }
//     // return true;
//     if(n<10) return true;
//     int temp=n;
//     int digits=0;
//     while(temp){
//         temp/=10;
//         digits++;
//     }
//     if(digits%2==0&&digits!=2) return false;
//     temp=n;
//     for(int i=0;i<digits/2;i++){
//         int left=(temp/(int)pow(10,digits-1-i))%10;
//         int right=(temp/(int)pow(10,i))%10;
//         if(left!=right){    
//             return false;
//         }
//     }
//     return true;
// }
// bool judge(int n){
//     for(int j=3; j*j<=n; j+=2){
//         if(n%j==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int a,b;
//     cin >> a >> b;
//     a=(a%2==0) ? a+1 : a;
//     for(int i=a;i<=b;i+=2){
//         if(judge(i)&&palindrome(i)){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }
const int N=1e9+5;
bool vis[N];
int primes[N];
int sum=0;
void isPrime(int a,int b){
    for(int i=a;i<=b;i++){
        if(!vis[i]){
            primes[++sum]=i;
        }
        for(int j=1;primes[j]&&primes[j]*i<=b;j++){
            vis[primes[j]*i]=true;
            if(i%primes[j]==0){
                break;
            }
        }

    }
    return;
}
void isPalindrome(){
    for(int i=1;i<=sum;i++){
        int n=primes[i];
        if(n<10) continue;
        int temp=n;
        int digits=0;
        while(temp){
            temp/=10;
            digits++;
        }
        if(digits%2==0&&digits!=2) continue;
        temp=n;
        for(int i=0;i<digits/2;i++){
            int left=(temp/(int)pow(10,digits-1-i))%10;
            int right=(temp/(int)pow(10,i))%10;
            if(left!=right){    
                goto next;

            }
        }
        cout<<n<<endl;
        next:
        continue;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    isPrime(a,b);
    isPalindrome();
}
//https://www.luogu.com.cn/problem/P1217