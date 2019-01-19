/*************************************************************************
	> File Name: 1995.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年11月07日 星期三 23时33分38秒
 ************************************************************************/

#include<iostream>
#include <cstdio>
using namespace std;


int  power(int a,int b,int mod){
    int  ans = 1;
    while(b){
        if(b & 1) ans = (long long)(ans * a) % mod;
        a = (long long)a * a % mod;
        b >>= 1;
    }
    return ans;
}



int main(){
    int   n,m,mod,a,b;
    int  ans = 0;
    scanf("%d", &n);
    while(n--){
        ans = 0;
        scanf("%d%d", &mod,&m);
        for(int i = 0; i < m; i++){
            scanf("%d%d",&a,&b);
            ans = (ans + power(a,b,mod)) % mod;
        }
        printf("%d\n",ans);
    }

    return 0;
}
