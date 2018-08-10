/*************************************************************************
	> File Name: p1597.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月25日 星期五 12时12分46秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int a[3] = {0};
char ch,k;
int main(){
    while(scanf("%c:=%c;",&ch,&k) == 2){
        if(k >= '0'&& k <='9')    a[ch-'a'] = k - '0';
        else  a[ch - 'a'] = a[k - 'a'];
    }
    cout << a[0] << " "<< a[1] << " " << a[2] << endl;
    return 0;
}

