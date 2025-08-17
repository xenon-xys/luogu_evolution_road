#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    double m,h;
    cin>>m>>h;
    double bmi=m/(h*h);
    if(bmi<18.5)
        cout<<"Underweight";
    else if(bmi<24)
        cout<<"Normal";
    else
        cout<<setw(6)<<bmi<<endl<<"Overweight";
    return 0;
}
//https://www.luogu.com.cn/problem/P5714