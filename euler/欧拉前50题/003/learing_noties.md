#### 原题大意

求一个数的最大素数因子





#### 初步思路

做一个素数表 num一直按顺序除以素数表中的素数，直到num为一个素数





#### 优化思路

一个大于一的合数 

n = a * b;

则：a > 1, b > 1

则：a < 根号n b > 根号n

结论：2 ---根号n 可以找到一个数字整除n的话n, 为合数，否则n为素数



####代码实现

````c++
#include <iostream>
#include <inttypes.h>

#define numb 600851475143
using namespace std;


int main(){
  int64_t num = numb;
  int64_t max_prime;
  for(int64_t i = 2; i*i < numb; i++){
    while(num % i == 0){
      num /= i;
      max_prime = i;
   }
   
    cout << max_prime << endl;
  }
  
  
}
````





####总结



运用了素数筛的思想，除掉之前所有素数的因子，下次进入while的一定是一个素数

原理：一个合数一定可以拆成若干素数的乘积形式