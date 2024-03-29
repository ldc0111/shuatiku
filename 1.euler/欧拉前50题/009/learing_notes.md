#### 题目大意

## **特殊毕达哥拉斯三元组**

毕达哥拉斯三元组是三个自然数a < b < c组成的集合，并满足

a2 + b2 = c2

例如，32 + 42 = 9 + 16 = 25 = 52。

有且只有一个毕达哥拉斯三元组满足 a + b + c = 1000。求这个三元组的乘积abc。



#### 勾股素数 (a, b,c 三者互为质数，他们的最大公因子是１)

性质１，他的整数倍也是勾股数，即（na, nb,nc）也是勾股数

性质２，（ａ,b,c）之间两两互为质数

性质３，ａ,b必为一奇一偶，

性质４，任何勾股数均可以表示为如下形式，其中ｎ < m , 且gcd(n m)　＝　１;

a = 2 * n * m;

b = m^2 - n^2;

c = m^2 + n^2;



证明：

性质１，

ａ^2 + b^2 = c^2;

n^2 * a^2 + n^2 * b^2 = n^2 * c^2;

n^2(a^2 + b^2) = n^2 *c^2;

性质２，

假设ａ,b 不互质，ｇｃｄ(a,b) = k;

a = kx,  b= ky;

(kｘ) ^ 2 + (ky)^2 = c^2;

k^2(x^2 + y^2) =c^2;

因此ｋ也是ｃ的因子，得到ｇｃｄ(a,b,c) = k,与定义矛盾

性质３，

若都为ａ,b偶数　gcd(a,b) = 2,与性质２，向违背



若都为奇数 则ｃ必然为偶数，

c = 2 * k,   c^2 = 4 * k^2;得到ｃ^2 ％４　＝　０，

由于ａ,b均为奇数，所以令ａ = 2 *n + 1,b = 2 * m + 1;

则　ａ^2 + b^2 = 4(m^2 + m +n^2 + n) + 2 得到(ａ^2+b^2) % 4 = 2;

2 != 0, 所以ａ,b 同时为奇数不成立

性质４，

根据性质３，设ａ为偶数，

则，令a=  2 * n * m, 则，ｂ,c同为奇数，可得

a^2 = 4n^2*m^2 = c^2 - b^2 = (c + b)(c - b), 其中（c + b) 与（ｃ-b)均为偶数

现在我们来证明在式子n^2 + m^2 =(c + b)/2 *(c - b)/2, 中(c + b)/2 与(c - b)/2互质

假设　ｇｃｄ((c + b)/2 ,(c - b)/2) = d;

则(c + b)/2 = xd, (c - b)/2=  yd; 解方程得，

ｃ = (x + y)d, b =(x - y)d, 由性质２可得ｄ比为１，





#### 代码实现

````c++
/*************************************************************************
	> File Name: euler009.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月06日 星期五 17时14分02秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>


int main(){
    bool flag = true;
    int a, b, c, e;
    for(int i = 1; i < 32 && flag; i++){
        for(int j = i + 1; j <= 32 && flag; j++){
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if(1000 % (a + b + c) == 0){
                e = (int) pow(1000 / (a + b + c), 3);
                printf("%d\n",e * a * b * c);
                flag = false;
            }
        }
    }
    return 0;
}

````





#### 总结

特殊方法，肯定更快。

