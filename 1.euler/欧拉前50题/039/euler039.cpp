/*************************************************************************
	> File Name: euler039.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年07月11日 星期三 19时40分21秒
 ************************************************************************/

#include <stdio.h>

#define max_range 1000

int many[max_range + 5] = {0};
int gcd(int a,int b){
    if(!b) return a;
    return gcd(b, a% b);
}

int Addmany(int a, int b, int c){
    int sum = 0, p = a + b +c;
    for(int k = p; k <= max_range; k += p){
        many[k] += 1;
        sum += 1;
    }
    return sum;
}
int main(){
    int a,b,c,d,p;
    for(int i = 2; i *i < max_range; i++){
        for(int j = 1; j < i; j++){
            if(gcd(i,j) != 1)continue;
            a = i * i - j * j;
            b = 2 * i *j;
            c = i * i + j * j;
            if(a + b + c > max_range) continue;
            Addmany(a, b,c);
        }
    }
    int max_num = 1;
    for(int i = 2; i <= max_range; i++){
        if(many[max_num] < many[i]) max_num =i;
    }
    printf("%d\n",max_num);



    return 0;
}
