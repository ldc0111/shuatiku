#### 题目大意

找到1--100万内所有循环素数的个数





### 代码



````c++
#include <stdio.h>
#include <math.h>

#define maxn_range 9999999;
#define maxn  1000000
int isprime[maxn + 5] = {0};//素食筛标记数组
int prime[maxn + 5] = {0};//记录数组

void initprime(){//初始化，找到１００万以内的所有素数///线性筛
  for(int i = 2; i < maxn_range; i++){
    if(!isprime[0]){//
      prime[++prime[0]] =  i;//ｐｒｉｍｅ[0]为记录个数
    }
    for(int j = 1; j < prime[0]; j++){//处理合数，用最小的素数与另一个数的乘积标记合数
      if(prime[j] * i > maxn_range) break;//超过界限，不用处理
      isprime[prime[j] * i] =  1;//在标记数组里标记，合数
      if(i % priem[j] == 0) break;//如果这个标记数里组成的素数大于小与用来标记的数，就返回，
    }
  }
}
int iscircularprime(int n){//判断循环素数
  if(isprime[n] != 0) return false;
  int x = n, h,j;
  
  h = (int)pow(10,(floor(log10(n))));//求权值，注意不用加１，不要与求位数搞混
  j = (int)(floor(log10(n))) + 1;//求位数
  //注意个位的权值是１，１０的０次方是１，
  for(int i = 0; i < j; i++){
    x = x / 10 + (x % 10) * h;//用公式来完成循环，完美
    if(isprime[x] != 0) return false;//依次判断是不是素数，有一个不是就返回
  }
  return true;
}

int solve(){
  int many = 0;
  for(int i = 1; i <= prime[0]; i++){//看素数的个数
    if(prime[i] > maxn) break;//过大返回
    if(iscircularprime(i)) many++;//成立加１
  }
  return many;
}

int main(){
  initprime();
  int many = solve();
  printf("%d\n", many);
  
  return 0;
}
````

#### 总结

规范化，规范化，规范化，功能分开，