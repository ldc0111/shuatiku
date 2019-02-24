/*************************************************************************
	> File Name: p2637.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月06日 星期三 22时37分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
int a[1005] = {0};
int val = 0,masum = 0,fv,fm;
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a + m);
    for(int i = 0; i < m; i++){
        fv = a[i];
        fm = fv*((m - i) > n ? n : (m - i));
        if(fm > masum){
            masum = fm;
            val = fv;
        }
    }

    cout << val << " " << masum << endl;
    return 0;
}
