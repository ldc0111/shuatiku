/*************************************************************************
	> File Name: p2670.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月23日 星期四 11时59分43秒
 ************************************************************************/

#include<iostream>
using namespace std;
int n, m;
char ch = 0;
int a[105][105] ={0};
int b[8][2] = {
    -1,-1, 0,-1,
    1,-1, -1,0,
    1,0, -1,1,
    0,1, 1,1
};

int main(){
    cin >> n >> m;
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> ch;
            if(ch == '*') a[i][j] = -1;
        }
    }
    for(int i = 1; i<= n; i++ ){
        for(int j = 1; j<= m; j++){
            if(a[i][j] == -1) continue;
            for(int k = 0; k < 8; k++){
                if(a[i + b[k][0]][j + b[k][1]] == -1) a[i][j]++;
            }
        }
    }
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == -1) cout << "*";
            else cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
