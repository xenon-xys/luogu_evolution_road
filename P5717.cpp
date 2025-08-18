#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        swap(a,b);
    }
    if(b>c){
        swap(b,c);
    }
    if(a>b){
        swap(a,b);
    }
    if(a+b<=c){
        cout << "Not triangle" << endl;
    } else {
        if(a*a+b*b==c*c){
            cout << "Right triangle" << endl;
        }else if(a*a+b*b>c*c){
            cout << "Acute triangle" << endl;
        }else if(a*a+b*b<c*c){
            cout << "Obtuse triangle" << endl;
        }
        if(a==b||b==c||c==a){
            cout << "Isosceles triangle" << endl;
        }
        if(a==b&&b==c){
            cout << "Equilateral triangle" << endl;
        }
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5717