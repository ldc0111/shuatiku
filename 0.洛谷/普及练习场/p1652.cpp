/*************************************************************************
	> File Name: p1652.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月18日 星期六 17时18分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define maxn 50
#define maxm 1000
int n;
int xyr[3][maxn + 5] = {0};
int x1,y1,x2,y2;
int ans = 0;

int leng(int x1,int y1,int x2,int y2){
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int main(){
    cin >> n;
    for(int i = 0; i< 3; i++){
        for(int j = 0; j < n; j++){
            cin >> xyr[i][j];
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = 0; i < n; i++){
        int len1=leng(xyr[0][i], xyr[1][i], x1, y1);
        int len2=leng(xyr[0][i], xyr[1][i], x2, y2);
        if(len1 < xyr[2][i]*xyr[2][i] && len2 > xyr[2][i]*xyr[2][i] ||
           len1 > xyr[2][i]*xyr[2][i] && len2 < xyr[2][i]*xyr[2][i])
             ans++;
    }
    cout << ans << endl;


    return 0;
}
