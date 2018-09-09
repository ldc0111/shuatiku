/*************************************************************************
	> File Name: p2640.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年09月09日 星期日 19时46分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define maxn 10000
int isprime[maxn + 5] = {0};
//int prime[maxn] = {0};
int k,n;
int fl = 0;
int pri(){
    for(int i = 2; i * i < maxn; i++ ){
        if(isprime[0] != 0) continue;
        for(int j = i * i; j < maxn; j += i) isprime[j] = 1;
    }
    return 0;
}



int main(){
    pri();
    //cout << isprime[10] << endl;
    cin >> k >> n;
    for(int i = 2; i + n < k; i++){
        if(isprime[i] == 0 && isprime[i + n] == 0){
            cout << i << " " << i + n << endl;
            fl = 1;
        }
    }
    if(fl == 0) cout << "empty" << endl;
    return 0;
}
