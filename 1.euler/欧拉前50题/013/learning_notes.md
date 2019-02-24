#### 题目大意

大整数加法





#### 代码实现

````c++
/*************************************************************************
	> File Name: euler013.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月09日 星期一 19时15分31秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    FILE *fl = fopen("in","r");
    char read_num[55];
    int ans[55] = {0};
    while(fscanf(fl,"%s", read_num) != EOF){
        int len = strlen(read_num);
        if(len > ans[0]) ans[0] = len;
        for(int i = 0; read_num[i]; i++){
            ans[len - i] += read_num[i] - '0';//读入数据
        }//为什么不写到一个循环里面。因为不是道位数是否相同，这个是一个模板
      
        for(int i = 1; i <= ans[0]; i++){//对每一位进行处理
            if(ans[i] >= 10){//如果大于１０，则需要进行处理，如果小于１０，则不需要进行处理，
                ans[i + 1] += ans[i] / 10;//如果大于１０，进位
                ans[i] %= 10;//取余
                if(i == ans[0]) ans[0]++;//如果是最后一位，还进行了进位，就加一位
            }
        }
    }
    for(int i = ans[0]; i > ans[0] - 10; i--){
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}


````

