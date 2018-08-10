/*************************************************************************
	> File Name: p2676.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月22日 星期二 19时39分56秒
 ************************************************************************/

#include <iostream>
#include <queue>
#include <functional>
using namespace std;

priority_queue<int> qu;
int n,b;
int ans = 0;
int main(){
    cin >> n >> b;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        qu.push(temp);
    }
    int a1 = 0;
    while(!qu.empty()){
        a1 += qu.top();
        qu.pop();
        ans++;
        if(a1 > b) break;
    }
    cout << ans << endl;

    return 0;
}

