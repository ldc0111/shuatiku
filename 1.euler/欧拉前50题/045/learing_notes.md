#### 题目大意

**三角形数、五边形数和六角形数**

三角形数、五边形数和六角形数分别由以下公式给出：

|      |              |                     |
| ---- | ------------ | ------------------- |
| 三角形数 | Tn=n(n+1)/2  | 1, 3, 6, 10, 15, …  |
| 五边形数 | Pn=n(3n−1)/2 | 1, 5, 12, 22, 35, … |
| 六边形数 | Hn=n(2n−1)   | 1, 6, 15, 28, 45, … |

可以验证，T285 = P165 = H143 = 40755。

找出下一个同时是三角形数、五边形数和六角形数的数。



### 代码实现

````c++
/*************************************************************************
	> File Name: euler045.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月05日 星期四 20时47分54秒
 ************************************************************************/

#include <stdio.h>

typedef long long (*calcfunc)(long long);

long long hexagonal(long long n){
    return n *(2 * n -1);
}
long long pentagonal(long long n){
    return n *(3 * n - 1) / 2;
}
long long triangle(long long n){
    return n *(n - 1) / 2;
}

bool valid(long long n,calcfunc f){
    long long mind = 1, maxn = n,mid;
    long long t;
    mid = (maxn + mind) >> 1;
    while(mind <= maxn){
        t = f(mid);
        if(t < n){
            mind = mid + 1;
        } else if(t > n){
            maxn = mid - 1;
        } else{
            return true;
        }
        mid = (mind + maxn) >> 1;
    }
    return false;
}



int main(){
    long long n = 143, t;
    while(1){
        ++n;
        t = hexagonal(n);
        if(valid(t,pentagonal) && valid(t, triangle)){
            printf("%d\n", t);
            return 0;
        }
    }
    return 0;
}

````





#### 总结

刷分题，和完整解题，

突出完整性，完美



## 笔记

遍历6边型数，6

任何一个六边形数都是一个3边型数