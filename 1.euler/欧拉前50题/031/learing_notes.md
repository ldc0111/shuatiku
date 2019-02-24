#### 题目大意









#### 递推

1，定义状态

2，确定递推方程

3，程序实现

一般正向递推加一个记忆化，

逆向递推一个for循环







f(n) = f(k, n)

f(k,n) = f(k - 1) + f(k, n - w(k));

####初步思路-正向递推

`````c++
#include <stdio.h>

int w(int k){
  static int arr[8] = {
    1,2,5,10,20,50,100,200
  };
  return arr[k - 1];
}

int f(int k, int n){
  if(n == 0) return 1;
  if( n < 0) return 0;
  return f(k - 1, n) + f(k, n - w(k));
}


int main(){
  printf("%d\n", f(8, 200));  
  return 0;
}
`````

#### 改进思路--记忆化

````c++
#include <stdio.h>

int arr1[205] = {0};//
int w(int k){//返回第ｋ种钱币的值
  static int arr[8] = {
    1,2,5,10,20,50,100,200
  }
  return arr[k - 1];
}
int f(int k, int n){//表示用几种钱币组成，n的值
  if(n == 0) return 1;//组成０的值只有一种情况，就是什么都不选
  if(n < 0) return 0;
  if(arr1[n] != 0) return arr1[n];
  return arr1[n] = f(k - 1, n) + f(k, n - w(k));
}

int main(){ 
  printf("%d",f(8, 200));
  return 0;
}
````

#### 改进思路2--逆向递推//

````c++
#include <stdio.h>
int many[8] = {1,2,5,10,20,50,100,200};
int d[205] = {0};

int main(){
  d[0] = 1;
  for(int i = 0; i < 8; i++){
    for(int j = many[i]; j <= 200; j++){
      d[j] += d[j - many[i]];
    }
  }
  printf("%d\n", d[200]);
  
  reutrn 0;
}
````





#### 总结

递推流程要知道，递推实现知道，从递推中找到动态规划的影子，是比较方便的











####套路

####干什么事都要有个套路，通过套路，寻找解题方案，通过面对各种难题，等等，

1，定义状态

2，确定递推方程

3，程序实现

一般正向递推加一个记忆化，

逆向递推一个for循环