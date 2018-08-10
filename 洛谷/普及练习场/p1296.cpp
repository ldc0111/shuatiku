/*************************************************************************
	> File Name: p1296.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月08日 星期五 21时29分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n, d;
int a[1000005];
int sum = 0;
int main(){
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        for(int j = i + 1; a[j] - a[i] <= d && j < n; j++){
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}
