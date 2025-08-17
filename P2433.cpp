#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.141593
using namespace std;
int main(){
    int num;
    cin>>num;
    switch(num){
        case 1:
            cout<<"I love Luogu!"<<endl;
            break;
        case 2:
            cout<<2+4<<" "<<10-2-4<<endl;
            break;
        case 3:
            cout<<14/4<<endl;
            cout<<4*(14/4)<<endl;
            cout<<14%4<<endl;
            break;
        case 4:
            cout<<(500.0/3)<<endl;
            break;
        case 5:
            cout<<(260+220)/(12+20)<<endl;
            break;
        case 6:
            cout<<sqrt(6.0*6.0+9.0*9.0)<<endl;
            break;
        case 7:
            cout<<100+10<<endl;
            cout<<100+10-20<<endl;
            cout<<0<<endl;
            break;
        case 8:
            cout<<PI*2*5<<endl;
            cout<<PI*5*5<<endl;
            cout<<PI*4.0*5*5*5/3<<endl;
            break;
        case 9:
            cout<<(((1+1)*2+1)*2+1)*2<<endl;
            break;
        case 10:
            //30a+b=240k
            //6a+b=60k
            //10a+b=?*10k
            cout<<(1.0*(240-60)/(30-6)*(10-6)+60)/10<<endl;
            break;
        case 11:
            cout<<100.0/(8-5)<<endl;
            break;
        case 12:
            cout<<'M'-'A'+1<<endl;
            cout<<char('A'-1+18)<<endl;
            break;
        case 13:
            cout<<floor(cbrt(PI*4.0/3*4*4*4+PI*4.0/3*10*10*10))<<endl;
            break;
        case 14:
            //(110-x)(10+x)=3500
            //1100+100x-x^2=3500
            //x^2-100x+2400=0
            //x=(100+-sqrt(10000-9600))/2
            cout<<round(110-(100+sqrt(10000-9600))/2.0)<<endl;
            break;
        return 0;
    }
}
//https://www.luogu.com.cn/problem/P2433