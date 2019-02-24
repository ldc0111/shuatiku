/*************************************************************************
	> File Name: p2141.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月16日 星期四 17时27分31秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define maxn 10000
int a[maxn + 5] = {0};
int aa[2 * maxn + 5] = {0};
int n = 0,b;
int ans = 0;

int main(){
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> b;
        if(aa[b] == 1) continue;
        aa[b]=1;
        a[i] = b;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(aa[a[i] + a[j]] == 1 && a[i] != a[j]){
                aa[a[i]+ a[j]]= 2;
               // cout << a[i] << " " << a[j]<< " " << a[i]+ a[j] << " "<<aa[a[i]+ a[j]]<< " "  << ans << endl;
                ans++;
            }
        }
    }
    cout << ans <<endl;

    return 0;
}
