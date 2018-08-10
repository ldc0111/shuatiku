/*************************************************************************
> File Name: p2356.cpp
> Author:
> Mail: 
> Created Time: 2018年06月04日 星期一 20时40分45秒
************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int a[1000][1000];
int main() {
    int n;
    int sum = -1,masum = -1;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == 0){
                sum = 0;
                for (int k = 0; k < n; k++){
                    sum +=a[k][j] + a[i][k];
                }
                masum = max(sum, masum);
            }
        }   
    }
    if (masum == -1){
        cout << "Bad Game!" << endl; 
    } else {
        cout << masum;
    }
    return 0;
}
