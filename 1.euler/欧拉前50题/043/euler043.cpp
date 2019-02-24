/*************************************************************************
	> File Name: euler043.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月04日 星期三 20时39分28秒
 ************************************************************************/

#include <stdio.h>
#include <algorithm>


using namespace std;

long long  isinteresting(int *a){
    if(a[0] == 0) return 0;
    int p[7] = {2, 3, 5, 7, 11, 13, 17}, j = 0;
    long long num = a[0],ret = a[0];
    for(int i = 1; i < 10; i++){
        ret = ret * 10 + a[i];
        num = num * 10 + a[i];
        if(i < 3) continue;
        num -= 1000 * a[i - 3];
        if(num % p[j++]) return 0;
    }
    return ret;
}


int main(){
    int a[10] = {0};
    for(int i = 0; i < 10; i++){
        a[i] = i;
    }
    long long sum = 0,temp;
    do{
        sum += isinteresting(a);
    }while(next_permutation(a, a + 10));
    printf("%ld", sum);


    return 0;
}
