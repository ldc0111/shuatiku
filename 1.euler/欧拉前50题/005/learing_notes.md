#### 题目大意

计算1-20的最小公倍数



#### 辗转相除法证明

gcd(a, b) == gcd(b, a % b);

如果gcd(a,b) == c,  则 a = xc, y = yc;

a % b = a - lower(a/b) * b = a - kb = xc - kyc = c(x - ky);

所以在a % b里仍有 c这个因子 接下来证明 (x - ky) 与 y互为质数



如果gcd(y, (x - ky)) = d; 则 y = nd, (x - ky)  = md;

则：y = nd, x = md + knd = d(m + kn);

则：a = (m + kn)dc, b = ndc;

则：gcd(a, b) >= cd, 有因为 gcd(a, b) == c, 所以 d == 1,

所以y 与 (x - ky)互质







#### 代码实现

````c++
#include <stdio.h>

int gcd(int a, int b){//辗转相除法
  if(!b) return a;//如果ｂ是０证明上一轮的ｂ就是最大公约数，这一轮是ａ
  return gcd(b, a % b);//减小规模
}


int main(){
  int sum = 1;
  for(int i = 2; i < 20; i++){
    sum = sum /gcd(sum, i) * i;
  }
  printf("%d\n", sum);
  
  return 0;
}
````









