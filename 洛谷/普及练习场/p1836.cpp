/*************************************************************************
	> File Name: p1836.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月27日 星期日 11时35分07秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

struct{
    int t,l;
}fl[105][105];

int n,m,x,y;
int x1,y1,x2,y2;
int main(){
    memset(fl,0,sizeof(fl));
    cin >> n >> m >> x >> y;
    for(int i = 1; i<= x; i++){
        cin>> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j <= x2; j++){
            for(int k = y1; k <= y2; k++){
                fl[j][k].t++;
                fl[j][k].l = i;
            }
        }
    }
    for(int i = 0; i < y; i++){
        cin >> x1 >> y1;
        if(fl[x1][y1].t > 0){
            cout << "Y " << fl[x1][y1].t << " " << fl[x1][y1].l << endl;
        }else{
            cout << "N" << endl;
        }
    }

    return 0;
}
