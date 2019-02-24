/*************************************************************************
	> File Name: p2907.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月07日 星期四 21时26分44秒
 ************************************************************************/
#include <iostream>
using namespace std;
long long n, k, num = 1;
//x = x
//x = x + k;
//x + x + k = n;
void dfs(long long n){
    if(n - k <= 0){
        return ;
    }
    if((n - k)%2 == 0){
        num++;
        dfs((n - k)/ 2);
        dfs(k + (n - k)/2);
    }
}

int main(){
    cin >> n >> k;
    dfs(n);
    cout << num << endl;
    return 0;
}
