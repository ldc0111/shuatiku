/*************************************************************************
	> File Name: p2026.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月09日 星期四 20时06分28秒
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long  n = 0;
struct ttt{
    int s;
    int t;
}tiao[22];
long long ans = 0;

int serach(int ss,int tt,int k){
    if(k >= n) return ss - tt;
    int ans1 = 0, ans2 = 0;

    ans1 = serach(ss * tiao[k].s, tt + tiao[k].t, k + 1);
    ans2 = serach(ss,tt,k + 1);

    return abs(ans1) < abs(ans2) ? ans1:ans2;
}
bool cmp(struct ttt a,struct ttt b){
    return(abs(a.s - a.t) < abs(b.s - b.t));
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tiao[i].s >> tiao[i].t;
    }
    sort(tiao,tiao + n,cmp);
    cout << abs(serach(tiao[0].s,tiao[0].t,1)) << endl;
    return 0;
}
