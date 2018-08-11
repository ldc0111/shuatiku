/*************************************************************************
	> File Name: euler031.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月03日 星期二 19时42分03秒
 ************************************************************************/

#include <stdio.h>

int arr1[205] = {1};
int w(int x){
    static int arr[8] = {
        1,2,5,10,20,50,100,200
    };
    return arr[x - 1];
}
int main(){
    for(int k = 1; k <= 8; k++){
        for(int i = w(k); i <= 200; i++){
            arr1[i] += arr1[i - w(k)];
        }
    }
    printf("%d\n", arr1[200]);
    return 0;
}
