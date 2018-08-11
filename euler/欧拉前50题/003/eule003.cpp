/*************************************************************************
	> File Name: eule003.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 16时28分50秒
 ************************************************************************/

#include <iostream>
#include <inttypes.h>
using namespace std;
#define numb 600851475143

int main(){
    int64_t num = numb;
    int64_t max_prime;
    for(int64_t i = 2; i * i <= numb; i++){
        while(num % i == 0){//素数筛思想，之前的素数的倍数都被筛了，所以进去的一定是素数
            num /= i;
            max_prime = i;
        }
    }

    cout << max_prime << endl;

    return 0;
}
