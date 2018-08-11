#### 题目大意

求解从1-1000000的数的二进制与十进制都为回文数的所有数的和





### 代码实现

````c++
#include <stdio.h>

int is_palindromic(int x, int base){
  int pre_x = x,num = 0;
  while(x) {//按进制翻转
    num = num * base + x % base;//看这个式子，最低位乘的权值最多次，所以是翻转
    x /= base;
  }
  return num == pre_x;//判断是不是相等
}


int value(int x){//二进制和十进制下都成立的数
  return is_palindromic(x, 2) && is_palindromic(x, 10);
}

int main(){
  int sum = 0;
  for(int i = 1; i < 1000000; i++){
    (is_value(i)&&(sum += i));
  }
  printf("%d\n", sum);
  
  return 0;
}
````





#### 总结

函数的通用性质一定要考虑；