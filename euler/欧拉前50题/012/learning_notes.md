#### 题目大意

## **高度可约的三角形数**

三角形数数列是通过逐个加上自然数来生成的。例如，第7个三角形数是 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28。三角形数数列的前十项分别是：

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, …

让我们列举出前七个三角形数的所有约数：

** 1**: 1
** 3**: 1,3
** 6**: 1,2,3,6
**10**: 1,2,5,10
**15**: 1,3,5,15
**21**: 1,3,7,21
**28**: 1,2,4,7,14,28

我们可以看出，28是第一个拥有超过5个约数的三角形数。

第一个拥有超过500个约数的三角形数是多少？



####简单思路

````c++
#include <stdio.h>
int triangle(int n){
  return n * (n - 1)/2;
}
int factorials(int x){
  int num = 0;
  for(int i = 1; i <= x; i++){
    if(x % i == 0){
      num++;
    }
  }
  return num;
}

int main(){
  int n = 1;
  whlie(factorials(triangle(n)) < 500) n++;
  printf("%d\n", triangle(n))
}
````

//注释，如果改成i * i的话需要注意 有平方项的形式，平方项的因字数为奇数 

#### 改进思路

一个正整数ｎ分解质因数，均可表示为如下形式

ｎ = p1^a1 * p2^a2 * ××××ｐn^an;

````c++
#include <stdio.h>
int triangle(int n){
  return n * (n - 1)/2;
}
int factorials(int x){
  int num = 1;
  for(int i = 2; i * i <= x; i++){
    if(x % i) continue;
    int times = 0;
    while(x%i == 0) x/= i, times++;
    num *= (times + 1);
  }
  if(x != 1) num *= 2;//如果ｘ 为素数　乘等于２
  return num;
}

int main(){
  int n = 1;
  whlie(factorials(triangle(n)) < 500) n++;
  printf("%d\n", triangle(n))
}
````





#### 记忆化思路

````c++
#include <stdio.h>

#define     maxn  1000000
int num[maxn + 5] = {0};
int triangle(int n){
  return n * (n - 1)/2;
}
int factorials(int x){
  int num = 1;
  for(int i = 2; i * i <= x; i++){
    if(x % i) continue;
    int times = 0;
    while(x%i == 0) x/= i, times++;
    num *= (times + 1);
  }
  if(x != 1) num *= 2;//如果ｘ 为素数　乘等于２
  return num;
}

int main(){
  for(int i = 1; i < maxn; i++){
    num[i] = factorials(i);
  }
  int n = 1;
  while(1){
    if(n % 2 == 1){
      if(num[n] * num[(n - 1) / 2] >= 500) break;
    }　else {
      if(num[n / 2] * num[n - 1] >= 500) break;
    }
    n++;
  }
  printf("%d\n", triangle(n))
}
````

#### 线性筛解法，Ｏ(n);

F(c) = F(a) * F(b)

````c++
/*************************************************************************
	> File Name: 012.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月09日 星期一 18时21分01秒
 ************************************************************************/

#include <stdio.h>

#define     maxn  100000
int num[maxn + 5] = {0};//因子个数的数组
int prime[maxn + 5] = {0};//素数数组
int min_num[maxn + 5] = {0};//最小素数幂次值
void init_prime(){
  for(int i = 2; i < maxn; i++){//循环
    if(!prime[i]){//标记素数
      prime[++prime[0]] = i;//标记素数
      num[i] = 2;//标记素数因子个数
      min_num[i] = 1;//标记最下素因子个数
    }
    for(int j = 1; j <= prime[0]; j++){//处理合数
      if(prime[j] * i > maxn) break;//大于返回
      prime[prime[j] * i] = 1;//标记不是素数
      
      if(i % prime[j]){//处理是不是最下素因子，如果是，且是一
        
        num[prime[j] * i] = num[prime[j]] * num[i];//用合数和素数的标记下一个数
        min_num[prime[j] * i] = 1;//标记最小素因子个数
        
      } else{
        num[prime[j] * i] = num[i]/(min_num[i] + 1) * (min_num[i] + 2);//乘法公式
        min_num[prime[j] * i] = min_num[i] + 1;//最小因子个数
        break;
      }
    }
    printf("%d\n", i);
  }
  return ;
}
int triangle(int n){
  return n * (n + 1)/2;
}
int main(){
  init_prime();  
  int n = 1;
  while(1){
    if(n % 2 == 1){
      if(num[n] * num[(n - 1) / 2] >= 500) break;
    } else {
      if(num[n / 2] * num[n - 1] >= 500) break;
    }
    n++;
  }
  printf("%d\n", triangle(n));
}

````





#### 总结

线性筛算法学习，