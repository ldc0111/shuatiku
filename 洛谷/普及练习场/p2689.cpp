/*************************************************************************
	> File Name: p2689.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月04日 星期一 20时23分25秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, n,fo = 0;
    char fl;

    cin >> x1 >> y1>> x2 >> y2 >> n;
    x2 = x2 - x1;
    y2 = y2 - y1; 
    for (int i = 0; i < n; i++) {
        cin >> fl;
        if (x2 > 0 && fl == 'N') x2--, fo++;
        else if (x2 < 0 && fl == 'S') x2++, fo++;

        if (y2 > 0 && fl == 'E') y2--,fo++;
        else if (y2 < 0 && fl == 'W') y2++,fo++;
    }
    if (x2 == 0 && y2 == 0)  cout << fo << endl;
    else cout << -1 << endl;

    return 0;
}
