/*************************************************************************
> File Name: p1105.cpp
> Author:
> Mail: 
> Created Time: 2018年05月14日 星期一 19时17分01秒
************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>
#define  maxn   1000
using namespace std;

struct pingtai{
    int h,l,r;
    int index;
}ping[maxn];
int a[maxn],b[maxn];
bool cmp(pingtai a,pingtai b){
    if(a.h == b.h){
        return a.index < b.index;
    }
    return a.h > b.h;
}

int main(){
    int n;
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >>ping[i].h >> ping[i].l >> ping[i].r;
        ping[i].index = i + 1;
    }
    sort(ping,ping+n, cmp);

    for(int i = 0; i < n; i++){
        int ll =  ping[i].l;
        int rr = ping[i].r;
        for(int j = i + 1; j < n; j++){
            if(ping[j].l <ll&&ping[j].r>ll){         
                a[ping[i].index] = ping[j].index;
                break;
            }
        }
        for(int j = i + 1; j < n; j++){
            if(ping[j].r > rr&&ping[j].l < rr){
                b[ping[i].index] = ping[j].index;
                break;
            }
        }    
    }

    for(int i = 1; i <= n;i++){
        cout << a[i]<< " " << b[i] << endl;
    }

    return 0;
}
