#### 题目大意

求解1-1000000中，在公式中链的长度最大的数

#####**最长考拉兹序列**

在正整数集上定义如下的迭代序列：

n → n/2 （若n为偶数）
n → 3n + 1 （若n为奇数）

从13开始应用上述规则，我们可以生成如下的序列：

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

可以看出这个序列（从13开始到1结束）共有10项。尽管还没有被证明，但我们普遍认为，从任何数开始最终都能迭代至1（“考拉兹猜想”）。



#### 题目思路

直接模拟，记录最长的那个

````c++
#include <stdio.h>

#define maxn 1000000

int get_chain_length(long long x){
  if(x == 1) return 1;
  if (x % 2){
    return get_chain_length( 3 * x + 1) + 1;
  } else {
    return get_chain_length( x / 2) + 1;
  }
}

int main(){
  int ans_num = 0, ans_length = 0;
  for(int i = 1; i <= maxn; i++){
    int temp_length = get_chain_length(i);
    if(temp_length > ans_num){
      ans_num = i;
      ans_length = temp_length;
    }
  }
  printf("%d\n", ans_num);
  
  return 0;
}
````





##### 记忆化思路

````c++
#include <stdio.h>

#define maxn 1000000
#define keep 50000000

int chain_keep[leep + 5] = {0};

int get_chain_length(long long x){
  if(x == 1) return x;
  if(x < keep &&chain_keep[x]) return chain_keep[x];
  int ans;
  if(x % 2) {//是奇数
    ans = get_chain_length(3 * x + 1) + 1;//注意记忆化实现
  } else {//是偶数
    ans = get_chain_length(x / 2) + 1;//注意记忆化实现
  }
  if(x < keep){//小于我们需要的值，保存，
    chain_keep[x] = ans;
  }
  return ans;//返回路径长度
}

int main(){
  int ans_num = 0,ans_length = 0;
  
  for(int i = 1; i < maxn; i++){
    int temp_length = get_chain_length(i);
    if(temp_length > ans_length){
      ans_length = temp_length;
      ans_num = i;
    }
  }
  
  printf("%d\n", ans_num);
  
  return 0;
}
````







#### 总结

本题用到了记忆化功能，其实在以往的一道求阶乘中我们已经使用了这种技巧，阶乘是我们需要平凡用到1-9的阶乘，所以我们就提前计算了，这题是，后面的数需要或者可以用到前面的结果，我们就可以把前面的结果存储起来，方便后面使用