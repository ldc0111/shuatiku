/*************************************************************************
	> File Name: euler003.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 15时40分07秒
 ************************************************************************/

#include <iostream>

using namespace std;
int prime[100000] = {0};
int index = 0;
void init(){
    for(int i = 0; i < 100000; i++){
        prime[i] = i;
    }
}

int shaprime(){
    init();
    prime[0] = -1;
    prime[1] = -1;
    for(int i = 2; i < 100000; i++){
        if(prime[2] == i){
            for(int j = 2; j*i <= 100000; j++){
                prime[j* i] = i;
            }
        }
    }
}
int main(){
    shaprime();
    long long num = 600851475143;
    for(int i = 2; i < 100000; i++){
        if(prime[i] == i){
        while(num % prime[i] == 0) num /= prime[i];
        if(num < 100000 && prime[num] == num) break;
        
    }}
    cout << num << endl;
    return 0;
}
