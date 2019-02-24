/*************************************************************************
	> File Name: p1116.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月15日 星期二 22时52分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[1005];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int times = 0;
    for(int i = 0 ;i < n - 1; i++){
        for(int j = 1; j < n; j++){
            if(a[j] < a[j - 1]){
                swap(a[j],a[j - 1]);
                times++;
            }
        }
    }
    cout << times << endl;

    return 0;
}
