/*************************************************************************
	> File Name: p1548.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月06日 星期一 16时07分54秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n,m;
long long zheng = 0,chang = 0;
int he(int n){
    if(n == 1) return 1;
    return n + he(n - 1);
}

int main(){
    cin >> n >> m;
    int nn = n,mm= m;
    while(nn >0 && mm > 0){
        zheng += nn * mm;
        nn--,mm--;
    }
    chang = he(n) * he(m);
    cout << zheng << " " << chang - zheng << endl;

    return 0;
}
