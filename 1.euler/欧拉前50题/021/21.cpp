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

int isprime[maxn + 5] = {0};//标记所有素数
int prime[maxn + 5] = {0};//统计所有素数
int sum[maxn + 5] = {0};//所有数的因子和
int min_prime[maxn + 5] = {0};//所有素数的最下的因子个数

void init(){//初始化
    for(int i = 2; i < maxn; i++){//
        if(!isprime[i]){//判断是不是素数
            prime[++prime[0]] = i;//统计素数
            sum[i] = 1 + i;//素数的因子和是他本身和１
            min_prime[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > maxn)break;
            isprime[i * prime[j]] = 1;//标记合数
            if(i % prime[j]){//处理合数
                //如果是最小素因子，且素因子个数是１，则详细请思考推导公式，
                sum[i * prime[j]]  = sum[i] * sum[prime[j]];
                min_prime[i * prime[j]] = 1;//标记这个数的最下素因子个数是１

            }else{//如果是最小素因子，但是最小素因子个数不是１，那就除掉ｆ(n) * f(n + 1)就行了，具体看公式推导
                min_prime[i * prime[j]] = min_prime[i] + 1;//个数加一
                sum[i * prime[j]] = sum[i] /(1-pow(prime[j], min_prime[i * prime[j]]))//除掉ｎ乘上ｎ+ 1
                                        *(1 - pow(prime[j], min_prime[i * prime[j]] + 1));
                  break;//返回
            }
        }
    }

}


int main(){
    long long  ans = 0;
    init();//初始化
    for(int i = 1; i <=maxn; i++){
        sum[i] -= i;//统计真因数
    }
    printf("%d %d\n", 284, sum[sum[284]]);
    for(int i = 1; i <=maxn; i++){
        if(sum[i] > maxn || sum[sum[i]] > maxn)continue;//不满足退出，满足继续
        if(sum[i] != i && i == sum[sum[i]]) ans += i;
    }
    printf("%ld\n", ans);//输出答案
    return 0;
}
