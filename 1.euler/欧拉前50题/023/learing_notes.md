#### 题目大意

## **并非盈数之和**

完全数是指真因数之和等于自身的那些数。例如，28的真因数之和为1 + 2 + 4 + 7 + 14 = 28，因此28是一个完全数。

一个数n被称为亏数，如果它的真因数之和小于n；反之则被称为盈数。

由于12是最小的盈数，它的真因数之和为1 + 2 + 3 + 4 + 6 = 16，所以最小的能够表示成两个盈数之和的数是24。通过数学分析可以得出，所有大于28123的数都可以被写成两个盈数的和；尽管我们知道最大的不能被写成两个盈数的和的数要小于这个值，但这是通过分析所能得到的最好上界。

找出所有不能被写成两个盈数之和的正整数，并求它们的和。

#### 思路

同21题一样，同样用线性筛求解计算出每个数的因子和，然后进行计算





#### 代码实现



`````c++
/*************************************************************************
	> File Name: 23.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月03日 星期五 17时40分52秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define maxn 28123

int prime[maxn + 5] = {0};
int sum[maxn + 5] = {0};
int min_prime[maxn + 5] = {0};
int fl[maxn + 5] ={0};
int init(){
    for(int i = 2; i <maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            sum[i] = i + 1;
            min_prime[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] >= maxn) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j]){
                sum[i * prime[j]] = sum[i] * sum[prime[j]];
                min_prime[i * prime[j]] = 1; 
            }else{
                min_prime[i * prime[j]] = min_prime[i] + 1;
                sum[i * prime[j]] = sum[i]/(1 - pow(prime[j],min_prime[i * prime[j]]))
                                  *(1 - pow(prime[j], min_prime[i * prime[j]] + 1));
                break;
            }
        }
    }
}


int main(){
    long long ans = 0;
    init();
    for(int i = 1; i < maxn; i++){
        sum[i] -= i;
        if(sum[i] > i){
            sum[++sum[0]] = i;
        }
    }
    printf("%d\n",sum[0]);
    for(int i = 1; i <= sum[0]; i++){
        for(int j = i; j <= sum[0]; j++){
            if(sum[i] + sum[j] > maxn) continue;
           fl[sum[i] + sum[j]] = 1;
        }
    }
    printf("%d\n", fl[24]);
    for(int i = 1; i <=maxn; i++){
        ans += i * (!fl[i]);
    }
    printf("%d\n", ans);
    return 0;
}

`````



#### 总结

线性筛的灵活运用