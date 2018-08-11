#### 题目大意

找到所有i * j = sum 满足这个式子的方程（满足用到了1- 9 所有的数字），求所有数字之积的和





#### 代码实现

`````c++
/*************************************************************************
	> File Name: euler032.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月03日 星期二 20时24分57秒
 ************************************************************************/

#include <stdio.h>
#include <math.h>
int canadd[1000000] ={0};
int howmanydigs(int i, int j){
    int digs =0;
    digs += (int) floor(log10(i)) + 1;
    digs += (int) floor(log10(j)) + 1;
    digs += (int) floor(log10(i * j)) + 1;
    return digs;
}
bool progressone(int t, int *num){
    while (t){
        if(t % 10 == 0) return false;
        if(num[t % 10 - 1]) return false;
        num[t % 10 - 1] = 1;
        t /= 10;
    }
    return true;
}
bool ispandigital(int i, int j){

    int num[9] = {0};
    bool flag = true;
    flag = (flag && progressone(i,num));
    flag = (flag && progressone(j, num));
    flag = (flag && progressone(i * j, num));
    return flag;
}
int main(){
    int sum = 0, digs;
    for(int i = 2; i < 100; i++){
        for(int j = i + 1;; j++){
            digs = howmanydigs(i,j);
            if(digs < 9) continue;
            else if(digs > 9) break;
            if(ispandigital(i, j) && !canadd[i * j]){
                sum += (i * j);
                canadd[i * j] =  1;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}

`````



`````c++
#include <stdio.h>
#include <math.h>
int valid[10000] = {0};//判断是否重复的数组
int digit(int n){//获得一个数子的位数
  return floor(log10(x)) + 1;
}
int get_digit(int x, int *num){//标记数组，同时查重
  while(x){
    if(x %10 == 0) return 0;
    if(num[x % 10] == 1) return 0;
    num[x % 10] = 1;
    x /= 10;
  }
  return 1;
}
int ｉｓ_valid(int a, int b,int c){//判断ａ,b,c是否是由１－９组成的
  int num[10] = {0};//标记数组
  if(!get_digit(a,num)) return 0;//判断一个数字
  if(!get_digit(b,num)) return 0;
  if(!get_digit(c,num)) return 0;
}

int main(){
  for(int a = 2;digit(a) + digit(a) + digit(a * a) <= 9; a++){//两层循环判断ａ b的取值
    for(int b = a + 1; digit(a) + digit(b) + digit(a * b)  <= 9; b++){
      if(digit(a) + digit(b) + digit(a * b) < 9) continue;
      if(is_valid(a,b,a * b)){
        ans += a * b * (1 - valid(a * b);
        valid[a * b] =  1;                
      }
    }
  }
  printf("%d\n", ans);
  
  return 0;
}

`````



### 总结

功能分开会简单许多，也会更加调理，更加清晰