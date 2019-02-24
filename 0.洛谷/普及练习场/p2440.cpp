/*************************************************************************
	> File Name: p2440.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年11月09日 星期五 09时30分27秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int chack(int *arr,int k,int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += arr[i]/k;
        if(ans < 0){
            ans = 0x3f3f3f3f;
        }
    }
    return ans;
}



int main(){
    int n,m,head = 0,tail = 1,mid=   0;
    scanf("%d%d", &n, &m);

    int *arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i  < n; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > tail){
            tail = arr[i];
        }
    }
    while(head < tail){
        mid = (head + tail + 1) >> 1;
        if(chack(arr,mid, n) < m) tail = mid - 1;
        else head = mid;
    }
    printf("%d\n",head);

    return 0;
}
