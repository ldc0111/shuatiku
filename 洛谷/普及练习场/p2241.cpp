/*************************************mZ***********************************
> File Name: p2241.cpp
> Author:
> Mail: 
> Created Time: 2018年08月04日 星期六 16时39分36秒
************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

long long  jie(int n){
    if(n == 1) return 1;
    return n + jie(n - 1);
}



int main(){
    long long n,m,tn,tm,zheng =  0,chang = 0;
    cin >> n >> m;
    tn = n,tm = m;
    while(tn != 0 && tm != 0){
        zheng += tn * tm;
        tn--,tm--;
    }
    //printf("%d\n",zheng);
    chang = jie(n) * jie(m);
   // printf("%d\n",jie());
    printf("%lld %lld\n",zheng,chang - zheng);
    return 0;
}






/*


int main(){
    long long  n,m,c,zheng = 0,chang = 0;
    cin >> n >> m;
    if(n > m){
        c = 
    }
    for(int k = 0; k < m && k < n; k++){
        for(int i = 1; i <= n;i++){
            for(int j = 1;j <= m;j++){
                if(i + k <= n && j + k <= m)zheng++;
            }
        }
    }
    //printf("%d\n",zheng);
    for(int k = 0; k < n; k++){
        for(int z = 0; z < m;z++){
            for(int i = 1; i<= n;i++){
                for(int j = 1; j <= m;j++){
                    if(i + k <= n && j + z <= m)chang++;
                }
            }
        }
    }
    printf("%d %d\n",zheng,chang - zheng);



    return 0;
}*/
