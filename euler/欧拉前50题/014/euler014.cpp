/*************************************************************************
	> File Name: euler014.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月02日 星期一 18时52分20秒
 ************************************************************************/

#include <stdio.h>


#define maxn 1000000
#define keep 50000000

int chain_keep[keep + 5] = {0};

int get_chain_length(long long x){
    if(x == 1) return 1;
    if(x < keep && chain_keep[x]) return chain_keep[x];
    int ans;
    if(x % 2){
        ans = get_chain_length(3 * x + 1) + 1;
    } else{
        ans = get_chain_length(x / 2) + 1;
    }
    if(x <= keep){
        chain_keep[x] = ans;
    }
    return ans;
}


int main(){
    int ans_num = 0, ans_length = 0;
    for(int i = 1; i <= maxn; i++){
        int temp_length = get_chain_length(i);
        if(temp_length > ans_length){
            ans_length = temp_length;
            ans_num = i;
        }
    }
    printf("%d\n",ans_num);
    return 0;
}
