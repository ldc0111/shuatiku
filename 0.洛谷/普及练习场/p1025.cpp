/*************************************************************************
	> File Name: p1025.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2019年01月09日 星期三 19时51分35秒
 ************************************************************************/
#include <iostream>
using namespace std;
#define MAX_N 200
#define MAX_K 6

int main() {
    int n, k;
    int data[MAX_N + 5][MAX_N + 5] = {0};
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        data[i][1] = 1;
        data[i][i] = 1;
    }
    //for (int i = 2; i <= k; i++) {
    //    data[1][k] = 0;
    //}
    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            if (i < j) continue;
            data[i][j] = data[i - 1][j - 1] + data[i - j][j];
        }
    }
    cout << data[n][k] << endl;
    return 0;
}
