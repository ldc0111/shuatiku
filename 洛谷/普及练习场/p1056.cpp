/*************************************************************************
	> File Name: p1056.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月23日 星期四 12时59分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

#define maxn 2000
int m,n,k,l,d;
int a[maxn + 5][4] = {0};
//int hl[1005] = {0};
//int shu[1005] = {0};
int x1,y1,x2,y2;
struct node{
    int index;
    int num;
}hl[1005],shu[1005];


bool comp(struct node a,struct node b){
    return a.num > b.num;
}

bool cmp(struct node a,struct node b){
    return a.index < b.index;
}
int main(){
   cin >> m >> n >> k >> l >> d;
    for(int i = 0; i< d; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2){
            int y = y1 < y2 ? y1: y2;
            shu[y].index = y;
            shu[y].num++;
        }else if (y1 == y2){
            int x = (x1 < x2 ? x1 : x2);
            hl[x].index= x;
            hl[x].num++;
        }
    }
    sort(shu,shu + n,comp);
    sort(hl,hl + m, comp);
    sort(shu,shu + l,cmp);
    sort(hl,hl + k,cmp);

    for(int i = 0; i < k; i++){
        cout << hl[i].index << " ";
    }
    cout << endl;
    for(int i = 0; i< l; i++){
        cout << shu[i].index << " ";
    }

    return 0;
}
