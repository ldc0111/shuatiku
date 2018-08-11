#### 题目概述

求4000000以内所有斐波那契的欧数值

#### 初步思路

存储0-4000000之内的所有斐波那契值，选取偶数相加，







##### 优化思路

用a b c 计算斐波那契值，统计每个偶数值



fib[i] = fib[i - 1] + fib[i - 2];

fib[i % 3] = fib[(i + 2) % 3] + fib[(i + 1) % 3];

#### 代码实现

~~~~c++
#include <iostream>

using namespace std;



int main(){
  int fib[3] = {0};
  int sum = 2, i = 1;
  fib[0] = 1, fib[1] = 2;
  while(fib[i % 3] <= 4000000) {
    i++;
    fib[i % 3] = fib[(i - 1) % 3] + fib[(i - 2) % 3];
    (fib[i % 3] % 2 == 0) &&(sum += fib[i % 3]);
  }
  cout << sum << endl;
  
  return 0;
}
~~~~













#### 总结：

循环数组，每次只用更新一个值，方便，快捷，&&操作替代if命令 简洁







骚操作

~~~~c++

    （fib[i] % 2 == 0）&& (sum += fib[i]);//短路原则 等于

    if (fib[i] % 2 == 0) {
        sum += fid[i];
    }

~~~~



