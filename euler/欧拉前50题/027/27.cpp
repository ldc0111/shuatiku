/*************************************************************************
	> File Name: 27.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月06日 星期一 10时23分01秒
 ************************************************************************/
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>

#define MAX_N 1000
#define MAX_M 2500
#define R_M_TEST_ROUND 30
 

int32_t prime[MAX_M + 5] = {0};


int32_t gcd(int32_t a, int32_t b) {
    if (!b) return a;
    return gcd(b, a % b);
}

bool R_M_TEST(int32_t x) {//测试发
    if (x <= 1) return false;//如果小于等于１不用测试
    int64_t a, m, ans;
    for (int32_t i = 0; i < R_M_TEST_ROUND; i++) {//测试轮数
        a = (rand() % (x - 1)) + 1;//生成随机数
        ans = 1;//初始化值
        m = x - 1;//初始化值
        while (m) {//ａ^(x - 1)mod x == 1
            if (m % 2) ans = (ans * a) % x;//快速幂
            a = (a * a) % x;
            m /= 2;
        }
        if (ans != 1) return false;//如果不等于１返回０
    }
    return true;//等于返回失败
}

int32_t HowManyPrime(int32_t a, int32_t b) {
    int32_t i = 0;
    while (R_M_TEST(i * i + a * i + b)) ++i;//统计从０开始素数的个数
    return i;//开始
}

int32_t main() {
    srand(time(0));
    prime[1] = INT_MAX;
    for (int32_t i = 2; i <= MAX_M; i++)
        if (!prime[i])
            for (int32_t j = i; j <= MAX_M; j += i)
                if (!prime[j]) prime[j] = i;//素数筛

    int32_t maxNum = 40, tempNum, result = 0;
    for (int32_t a = 1 - MAX_N; a < MAX_N; a++) 
        for (int32_t b = (a < 0 ? -a + 1 : 2); b < MAX_N; b++) {//ｂ的遍历范围
            //剪枝剪枝开始
            if (prime[b] != b) continue;//根据结论，不是素数返回
            if (prime[b + a + 1] != b + a + 1) continue;//不是素数返回
            if (a > 0 && b > 0 && prime[gcd(a, b)] <= maxNum) continue;//结论３
            //剪枝结束
            tempNum = HowManyPrime(a, b);//返回生成的最大素数的个数
            if (tempNum > maxNum) {//如果大于就交换
                result = a * b;//计算积
                maxNum = tempNum;
            }
        }
    printf("%d\n", result);
    return 0;
}
