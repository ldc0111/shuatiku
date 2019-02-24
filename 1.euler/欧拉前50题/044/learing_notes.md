#### 题目大意

**五边形数**

五边形数由公式Pn=n(3n−1)/2生成。前十个五边形数是：

1, 5, 12, 22, 35, 51, 70, 92, 117, 145, …

可以看出P4 + P7 = 22 + 70 = 92 = P8。然而，它们的差70 − 22 = 48并不是五边形数。

在所有和差均为五边形数的五边形数对Pj和Pk中，找出使D = |Pk − Pj|最小的一对；此时D的值是多少？



#### 知识点

二分法解决问题，熟练使用二分法，





#### 代码实现

````c++
/*************************************************************************
	> File Name: euler.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月05日 星期四 20时14分30秒
 ************************************************************************/

#include <stdio.h>

long long  pentagonal(long long n){//计算五变形数
    return n * (3 * n - 1) / 2;
}
bool ispentagonal(int n){//二分一个数满足满足不满足一个规律，或者一个通项公式，要知，首先规律必须是单调的，其次必须知道界限，就是最大与最小值的n值//然后每次二分计算看是否满足，知道没有界限，表示不满足，则表示不满足这个规律
    long long  mind = 1, maxd = n, mid;
    long long t;
    mid = (mind + maxd) >> 1;
    while(mind <= maxd){
        t = pentagonal(mid);
        if(t < n){
            mind = mid + 1;
        }else if(t > n){
            maxd = mid - 1;
        }else{
            return true;
        }
        mid = (mind + maxd) >> 1;
    }
    return false;
}


int main(){
    long long d = 100000000;
    long long n = 1, m, p1, p2;
    while(1){//不知道上界但是有一个贵率是，ｎ和ｎ-x随着ｘ增大差值也在增大，还有一个就是可以确定一个截止调节就是当ｎ和n－１形成的五边形数的差大于我们已经求得的无边行数时，就没有必要向下求了，这个群可以用来判断形成循环条件，和截止条件，是２层循环，第一层就是设定ｎ的取值，第二层就是用来构成计算式子，f(n) - f(n -ｘ)的数开始是ｎ - 1,然后带入二分发判f(n) - f(n -ｘ)与f(n) + f(n -ｘ)是不是五变形数
        p1 = pentagonal(n);
        p2 = pentagonal(n - 1);
        if(p1 - p2 > d) break;
        for(int m = n - 1; m >= 1; m--){
            p2 = pentagonal(m);
            if(p1 - p2  > d) break;
            if(ispentagonal(p1 + p2) && ispentagonal(p1 - p2)){
                d = p1 - p2;
            }
        }
        n++;//ｎ值
    }
    printf("%d\n", d);//输出答案，
    return 0;
}

````





#### 总结

有的题可以取巧，但更重要的是完整的思路



上界和截至条件