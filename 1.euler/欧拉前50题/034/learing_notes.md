#### 题目大意

145 is a curious number, as 1! + 4! + 5! = 1 + 24 + 120 = 145.

Find the sum of all numbers which are equal to the sum of the factorial of their digits.

Note: as 1! = 1 and 2! = 2 are not sums they are not included.



#### 界值计算

9！ = 362880

y1 = pow(10,n), y2 = 362880 * n



​                            y1                y2

n = 6              1000000         2177280

n = 7              10000000       2540160

所以在n等与7时，y2表示的最大值为2540160小于y1，所以最大值为2540160，





#### 代码实现

````c++
#include <iostream>

#define maxn   2540160//上限
using namespace std;

int num[10];//每个数的阶乘的数组
init(){//初始化函数
  num[0] = 1;//切记０的阶乘是１
  for(int i = 1; i < 10; i++){
    num[i] = num[i - 1] * i;
  }
}

int is_curious(int x){//判断是否满足
  int pre_x = x, sum = 0;
  while(x){//０时退出
    sum += num[x % 10];//直接相加，避免重复计算
  }
  return sum == pre_x; //对比
}

int main(){
  init();
  int sum = 0;
  for(int i = 3; i < maxn; i++){
    (is_curious(i) && sum += i)//判断求和函数
  }
  cout << sum << endl;
  return 0;
}
````





#### 总结：

概念0！ = 1；

记得把需要平凡使用的数据计算出来，构成一个数组，减少计算，简单的空间换取时间