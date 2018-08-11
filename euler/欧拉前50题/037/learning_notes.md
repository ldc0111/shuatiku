#### 题目大意

**可截素数**

3797有着奇特的性质。不仅它本身是一个素数，而且如果从左往右逐一截去数字，剩下的仍然都是素数：3797、797、97和7；同样地，如果从右往左逐一截去数字，剩下的也依然都是素数：3797、379、37和3。

只有11个素数，无论从左往右还是从右往左逐一截去数字，剩下的仍然都是素数，求这些数的和。

注意：2、3、5和7不被视为可截素数。



#### 代码

````c++
/*************************************************************************
	> File Name: euler037.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月04日 星期三 19时01分13秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>

#define max_range 50000000
#define maxn 1000000

int isprime[max_range + 5] = {0};
int prime[max_range + 5] = {0};

void initprime(){//线性筛框架
    isprime[0] = isprime[1] = 1;//判断个位时候的要用
    for(int i = 2; i < max_range; i++){//
      //处理素数,统计素数
        if(!isprime[i]){//
            prime[++prime[0]] = i;
        }
      //标记合数，用合数的最小素数标记掉合数
        for(int j = 1; j <= prime[0]; j++){//一共几个素数
            if(prime[j] * i > max_range) break;//大于返回
            isprime[prime[j] * i] = 1;//标记合数
            if(i % prime[j] == 0) break;//非最小素数返回
        }
    }
}
int iscirculatprime(int n){
    if(isprime[n] != 0) return false;
    int x = n, h;
    while(x){//去掉右边判断是不是素数
        if(isprime[x] != 0)return false;
        x /= 10;
    }
    h = (int)pow(10,(floor(log10(n))));
    x = n;
    while(x){//去掉左边看是不是素数//处理方法，需要一个最高位的权值，每次权值/10
        if(isprime[x] != 0) return false;
        x -=(x/h) * h;
        h /= 10;
    }
    return true;//返回为真
}
int solve(){
    int many = 0, flag = 11;
    for(int i = 1; i <= prime[0]; i++){
        if(prime[i] < 10) continue;//小于１０的不用处理
        if(!iscirculatprime(prime[i])) continue;//判断是否成立，如果成立，就＋＋，入过不成立就不加
        many += prime[i];
        //printf("%d\n", prime[i]);
        if(!(--flag)) break;
    }
    return many;
}

int main(){
    initprime();
    int sum = solve();
    printf("%d\n", sum);
    return 0;
}

````



#### 总结

规范

功能分开

恩，没了

