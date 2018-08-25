/*************************************************************************
	> File Name: p1152.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月23日 星期四 11时09分42秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
#define maxn 1000
int a[maxn + 5] = {0};
int b[maxn + 5] = {0};
int fl = 1,n;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i  = 1; i < n; i++) b[i] = abs(a[i] - a[i -1]);
    sort(b + 1, b + n);
    //cout << b[3] << endl;
    for(int i = 1; i < n; i++){
        if(b[i] != i && fl) printf("Not jolly\n"),fl = 0;
    }
    if(fl) printf("Jolly\n");

    return 0;
}
