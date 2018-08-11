#### 题目大意

求解第10001个素数-----**



104743



#### 简单思路*代码

````c++
#include <stdio.h>

int is_prime(int x){
  for(int i = 2; i * i<= x; i++){
    if(x % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int num, tprime = 0;
  for(num = 1; tprime < 10001; num++){
    tprime += is_prime(num);
  }
  printf("%d\n", num - 1)
  return 0;
}
````



#### 素数筛*

在素数筛中，我们可以看出一个结论，就是i×i之前的合数，都被更小的素数筛过了，

所以我们可以根据这性质，进行改进，

//可以标记最小素因子，同时可以分解素因数

````c++
#include <stdio.h>
#define maxn 200000

int prime[maxn] = {0};//0表示都为素数



int main(){
  prime[0] = prime[1] = 1;//不是素数
  for(int i =  2; i * i <= maxn; i++){
    if(!prime[i]) {//没有被标记是素数
      for(int j = i * i; j <= maxn; j += i){//有边界值
        //这里有个操作从i * i，二不是从２开始，然后每次加一个ｉ
        //因为比ｉ * i　小的ｎ * i一定比跟小的素数标记过了
        //２　×　ｉ 被２给标记了
        //３　×　ｉ被３给标记了
        //４乘ｉ　同样可以看做　２　×　（２　×　ｉ）也被２个标记了，标记了
        prime[j] = 1;//标记 
      }
    }
  }
  
  prime[0] = 0;
  for(int i = 2; i<= maxn; i++){
    if(!prime[i]) prime[++prime[0]] = i;
  }
  printf("%d\n", prime[10001]);
  
  return 0;
}
````

#### 线性筛

````c++
#includee <stdio.h>


#define maxn 200000

int prime[maxn + 5]//存素数

int main(){
  for(int i = 2; i < maxn; i++){//从２开始用来标记
    if(!prime[i]) prime[++prime[0]] = i;
    //都是用来标记比素数大的数的，素数的个数要小于用来标记的数，第一个素数就是２，就要乘２，后面继续
    
    for(int j = 1; j <= prime[0]; j++){
      if(prime[j] * i > maxn) break;
      
      prime[prime[j] * i] = 1;
      if(i % prime[j] == 0) break;
    }
  }
  
  printf("%d\n", prime[10001]);
  
  return 0;
}
````

#### 总结

换思路，减少不必要操作