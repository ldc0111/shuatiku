#### 原题大意

求两个3位数的乘积最大的回文数



#### 错误思路

从大往下计算，依次判断，直到汇文数出现，返回结果

###### 错误原因

外层循环最大，里层循环特别小才出现回文数，结果就返回了，不是正确结果





#### 优化思路

从小忘大依次计算，记录每次的最大值，返回结果



````c++
#include <iostream>
using namespace std;
int is_palindrome(int x) {
  int m = x, n = 0;
  while(m){
    n = n * 10 + m % 10;
    m /= 10
  }
  return n == x;
}

int main(){
  int max_palindrome = 0;
  for(int i = 100; i < 10000; i++){
    for(int j = i; j < 999; j++){
      if(i * j > max_palindrome && is_palindrome(i * j)){
        max_palindrome = i * j;
      }
    }
  }
  cout << max_palindrome << endl;
  return 0;
}
````







#### 总结：

编程时先考构建一个思路，在继续完善代码，





#### 思考题：

如果一个数是199999999，反转之后会影不影响结果，

答案不影响，因为如果存的下，是回文数是不会溢出的，如果溢出就不是回文数，