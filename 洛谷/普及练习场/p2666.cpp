/*************************************************************************
	> File Name: p2666.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月30日 星期三 19时53分42秒
 ************************************************************************/

#include <iostream>
using namespace std;
int ans = 0;
int n;
void dfs(int n,int ti){
    if(n == 0) {
        ans++;
        ans %= 100;
        return ;
    }else if(n < 0||ti <= 0){
        return ;
    }
    for(int i = 0; i*i <= n; i++){
        dfs(n - i*i,ti - 1);
    }
    return ;
}


int main(){
    cin >> n;
    dfs(n,4);
    cout << ans << endl;
    return 0;
}
