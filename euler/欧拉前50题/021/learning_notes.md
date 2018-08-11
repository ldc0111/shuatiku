#### 题目大意

## **亲和数**

记d(n)为n的所有真因数（小于n且整除n的正整数）之和。
如果d(a) = b且d(b) = a，且a ≠ b，那么a和b构成一个亲和数对，a和b被称为亲和数。

例如，220的真因数包括1、2、4、5、10、11、20、22、44、55和100，因此d(220) = 284；而284的真因数包括1、2、4、71和142，因此d(284) = 220。

求所有小于10000的亲和数的和。



#### 代码思路

用线性筛的思想计算出所有的数的因数和

然后统计就可以了

* 注意：亲和数不能等于自己





#### 代码实现

````c++
/*************************************************************************
	> File Name: 21.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月03日 星期五 10时47分25秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

#define maxn 10000

int isprime[maxn + 5] = {0};//标记用的
int prime[maxn + 5] = {0};//素数数组
int sum[maxn + 5] = {0};//因子和
int min_prime[maxn + 5] = {0};//最小素因子的幂次

void init(){
    for(int i = 2; i < maxn; i++){
        if(!isprime[i]){//处理素数
            prime[++prime[0]] = i;
            sum[i] = 1 + i;//因子和
            min_prime[i] = 1;//最小素因子的幂次
        }
        for(int j = 1; j <= prime[0]; j++){//处理合数
            if(i * prime[j] > maxn)continue;
            isprime[i * prime[j]] = 1;//标记合数
            if(i % prime[j]){//
                sum[i * prime[j]]  = sum[i] * sum[prime[j]];//有数学公式推导出来的
                min_prime[i * prime[j]] = 1;//i 和prime[j]没有其他因子，证明，不能相互约分，根据公式知道
            }else{//
                min_prime[i * prime[j]] = min_prime[i] + 1;
                sum[i * prime[j]] = sum[i] /(1-pow(prime[j], min_prime[i * prime[j]]))
                                        *(1 - pow(prime[j], min_prime[i * prime[j]] + 1));
            }
        }
    }

}


int main(){
    long long  ans = 0;
    init();
    for(int i = 1; i <=maxn; i++){
        sum[i] -= i;
    }
    printf("%d %d\n", 284, sum[sum[284]]);
    for(int i = 1; i <=maxn; i++){
        if(sum[i] > maxn || sum[sum[i]] > maxn)continue;
        if(sum[i] != i && i == sum[sum[i]]) ans += i;//切记一个数不熟亲和数
    }
    printf("%ld\n", ans);
    return 0;
}

````





#### 总结

注意：亲和数不能等于自己

