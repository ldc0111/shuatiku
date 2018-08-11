#### 题目大意

1634 = 14 + 64 + 34 + 44
8208 = 84 + 24 + 04 + 84
9474 = 94 + 44 + 74 + 44

As 1 = 14 is not a sum it is not included.

The sum of these numbers is 1634 + 8208 + 9474 = 19316

Find the sum of all the numbers that can be written as the sum of fifth powers of their digits.





#### 上限确定

这道题的重点就是上限的确定，求解两条直线的焦点

y1 = pow(10,n)与 y2 = pow(9, 5);

​             y1                  y2

n = 4    10000           236196

n = 5    100000        295245

n = 6    1000000      354294

可以看出当n = 6，y1为7为数字，y2为6为数字，

所以当sum为6为数是，y2最大为354294，当sum为7位数时，y2为413343，构成不来7位数，当sum为6为数是，构成的最大六为数位354294，所以这个数为上界，





#### 代码实现

```c++
#include <iostream>
#include <cmath>

#define maxn 354294//上界
using namespace std;
int is_valid(int x){//判断一个数的５次方等于不等于他本身
  int pre_x = x, sum = 0;//记录自己和创建之后哪个数的未知量
  while (x){//等于０返回
    sum += pow(x % 10, 5);//某一位的５次方
    x /= 10;//去掉一位
  }
  return pre_x == sum;//对比
}

int main(){
  int sum = 0;
  for (int i = 2; i < maxn; i++){
    (is_valid(i) && (sum += i));
  }
  
  cout << sum << endl;
  return 0;
}
```



#### 总结

牢记与数学结合，才能做好题，逻辑清晰，代码清晰       