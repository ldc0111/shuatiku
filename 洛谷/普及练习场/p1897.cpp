/*************************************************************************
	> File Name: p1897.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月06日 星期一 15时35分07秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define maxn 10000000

int n;
int a[maxn + 5];
int tim = 0,m5 = 0,m64 = 0;
int temp =  0;

int main(){
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> temp;
        if(a[temp] == 1)continue;
        a[temp] = 1;
        m5++;
        if(temp > m64) m64 = temp;
    }
    cout << n + m64 * 10 + m5 * 5 << endl;
    return 0;
}
