/*************************************************************************
	> File Name: p2525.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月02日 星期六 22时43分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n,a[11];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(prev_permutation(a,a + n)){
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
    }else{
        cout << "ERROR";
    }
    cout << endl;

    return 0;
}

