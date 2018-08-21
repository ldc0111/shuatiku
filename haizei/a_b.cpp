/*************************************************************************
	> File Name: a_b.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月21日 星期二 10时21分40秒
 ************************************************************************/

#include<iostream>
using namespace std;

int a,b;
int c;
int main(){
    cin >> a >> b;
    int c,d;
    while(b != 0){
        c = a ^b;
        d = (a &b) << 1;
        a = c;
        b = d;
    }
    cout << a << endl;
}
