#### 题目大意

1406357289是一个0至9全数字数，因为它由0到9这十个数字排列而成；但除此之外，它还有一个有趣的性质：子串的可整除性。

记d1是它的第一个数字，d2是第二个数字，依此类推，我们注意到：

- d2d3d4=406能被2整除
- d3d4d5=063能被3整除
- d4d5d6=635能被5整除
- d5d6d7=357能被7整除
- d6d7d8=572能被11整除
- d7d8d9=728能被13整除
- d8d9d10=289能被17整除

找出所有满足同样性质的0至9全数字数，并求它们的和。



#### 代码实现

````c++
#include <stdio.h>
#include <algorithm>

using namespace std;

int ispand(int *a){
  if(a[0] == 0) return 0;
  int p[7] = {2,3,5,7,11,13,17},j = 0;
  long num = a[0], ret = a[0];
  for(int i = 1; i < 10; i++){
    num = num * 10 + a[i];
    ret = ret * 10 + a[i];
    if(i < 3) continue;
    num -= 1000 * a[i - 3];
    if(num %  p[j++]) return 0;//如果除不尽，返回，
  }
  return ret;
}



int main(){
  int a[10];
  for(int i = 0; i < 10; i++){
    a[i] = i;
  }
  long long sum =0;
  do{
    sum +=ispand(a);
  }while(next_permutation(a, a + 10));
  printf("%ld", sum);
  return 0;
}
````





#### 总结

全排列函数

next_permutation();