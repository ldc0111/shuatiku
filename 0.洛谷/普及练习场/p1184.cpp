/*************************************************************************
	> File Name: p1184.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月08日 星期三 22时25分41秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

#define maxn 22

int n,m,ans = 0;
string gao[maxn];

int main(){
    cin >> n >> m;
    //cout << n << m;i
    getline(cin, gao[0]);
    for(int i = 1; i <= n; i++){
        getline(cin,gao[i]);
    }
    for(int i = 0; i < m; i++){
        getline(cin,gao[0]);
        //cout << m << i <<gao[0] << endl;
        int j = 1;
        while(j <= n){
            //cout << gao[j]<< " " << gao[0] << endl;
            if(gao[j++] == gao[0]){
                ans++;
                break;
            }
        }

    }
    if(n == 1 && m == 1 && gao[0] == gao[1]){
         cout << 1 << endl;
    }else{
         cout << ans << endl;
    }


    return 0;
}
