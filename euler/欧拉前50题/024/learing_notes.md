



#### 题目大意

## **字典序排列**

排列指的是将一组物体进行有顺序的放置。例如，3124是数字1、2、3、4的一个排列。如果把所有排列按照数字大小或字母先后进行排序，我们称之为字典序排列。0、1、2的字典序排列是：

012   021   102   120   201   210

数字0、1、2、3、4、5、6、7、8、9的字典序排列中第一百万位的排列是什么？



####全排列讲解

０，１，２，３，４，５，６，７，８，９

step1: 由于要求第１００个状态，所以就需要变换９９次

step2:99 < 9!, 99 < 8!, ,,,,99 < 5!, 99 > 4! 所以倒数第六位之前数字均不会被改动，从倒数第５为开始会被改动

step3: 由于每变换２４(4!)次，倒数第５位被改动一次，提出一个比第５位大１的数字



````c++
#include <stdio.h>

#define N_status 1000000;
#define maxn 10;
int a[manx] = {0,1,2,3,4,5,6,7,8,9};

int main(){
  int n = N_status - 1, max_status = 1, ind = 0;
  while(max_status <= n && ind < maxn){
    ind++;
    max_status = max_status * ind;
  }
  max_status /= ind;
  for(int i = maxn - ind; i < maxn && n; i++){
    --ind;
    int j = i + 1,k;
    while(n >= max_status && j < maxn){
      k = a[i]; a[i] = a[j]; a[j] = k;
      n -= max_status; ++j;
    }
    max_status /= ind;
  }
  for(int i = 0; i < maxn; i++){
    printf("%d", a[i]);
  }
  printf("\n");
  
  return 0;
}
````







#### 总结

由思路实现代码是一种技能