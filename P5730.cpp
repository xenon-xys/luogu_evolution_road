#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[105];
    string c[10][5];
    c[0][0]="XXX";
	c[0][1]="X.X";
	c[0][2]="X.X";
	c[0][3]="X.X";
	c[0][4]="XXX";
	
	c[1][0]="..X";
	c[1][1]="..X";
	c[1][2]="..X";
	c[1][3]="..X";
	c[1][4]="..X";
	
	c[2][0]="XXX";
	c[2][1]="..X";
	c[2][2]="XXX";
	c[2][3]="X..";
	c[2][4]="XXX";
	
	c[3][0]="XXX";
	c[3][1]="..X";
	c[3][2]="XXX";
	c[3][3]="..X";
	c[3][4]="XXX";
	
	c[4][0]="X.X";
	c[4][1]="X.X";
	c[4][2]="XXX";
	c[4][3]="..X";
	c[4][4]="..X";
	
	c[5][0]="XXX";
	c[5][1]="X..";
	c[5][2]="XXX";
	c[5][3]="..X";
	c[5][4]="XXX";
	
	c[6][0]="XXX";
	c[6][1]="X..";
	c[6][2]="XXX";
	c[6][3]="X.X";
	c[6][4]="XXX";
	
	c[7][0]="XXX";
	c[7][1]="..X";
	c[7][2]="..X";
	c[7][3]="..X";
	c[7][4]="..X";
	
	c[8][0]="XXX";
	c[8][1]="X.X";
	c[8][2]="XXX";
	c[8][3]="X.X";
	c[8][4]="XXX";
	
	c[9][0]="XXX";
	c[9][1]="X.X";
	c[9][2]="XXX";
	c[9][3]="..X";
	c[9][4]="XXX";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<n;j++){
            cout<<c[a[j]-'0'][i];
            if(j!=n-1) cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
//https://www.luogu.com.cn/problem/P5730