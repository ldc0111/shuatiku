#### 题目大意

计算２^1000所有位之和







#### 初级思路

竖式相乘

````c++
/*************************************************************************
	> File Name: euler016.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月10日 星期二 17时01分46秒
 ************************************************************************/

#include <stdio.h>

#define D_value 1000

int main(){
    int ans[1000] = {0};
    ans[0] = 1, ans[1] = 1;
    for(int i = 0; i < 100; i++){
        for(int j = 1; j <= ans[0]; j++){
            ans[j] *= 1024;
        }
        for(int j = 1; j <= ans[0]; j++){
            if(ans[j] < D_value) continue;
            ans[j + 1] += ans[j] / D_value;
            ans[j] %= D_value;
            if(j == ans[0]) ans[0]++;
        }
    }
    int sum = 0;
    for(int i = 1; i <= ans[0]; ++i){
        while(ans[i]){
            sum += ans[i] % 10;
            ans[i] /= 10;
        }
    }

    printf("%d\n", sum);
    return 0;
}

````



#### 总结

竖式相乘，可以用快速幂进行改进

