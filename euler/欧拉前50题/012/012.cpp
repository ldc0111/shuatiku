/*************************************************************************
> File Name: 012.cpp
> Author:
> Mail: 
> Created Time: 2018年07月09日 星期一 18时21分01秒
************************************************************************/

#include <stdio.h>

#define     maxn  100000
int num[maxn + 5] = {0};
int prime[maxn + 5] = {0};
int min_num[maxn + 5] = {0};//最小素数幂次值
void init_prime(){
    for(int i = 2; i < maxn; i++){
        if(!prime[i]){
            prime[++prime[0]] = i;
            num[i] = 2;
            min_num[i] = 1;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(prime[j] * i > maxn) break;
            prime[prime[j] * i] = 1;//标记不是素数
            if(i % prime[j]){//互为素数
                 num[prime[j] * i] = num[prime[j]] * num[i];
                 min_num[prime[j] * i] = 1;
            } else{
                 num[prime[j] * i] = num[i]/(min_num[i] + 1) * (min_num[i] + 2);
                 min_num[prime[j] * i] = min_num[i] + 1;
            }
        }
    }
    return ;
}
int triangle(int n){
    return n * (n - 1)/2;
}
int main(){
    init_prime();

    int n = 1;
    while(1){
        if(n % 2 == 1){
            if(num[n] * num[(n - 1) / 2] >= 500) break;
        } else {
            if(num[n / 2] * num[n - 1] >= 500) break;
        }
        n++;
    }
    printf("%d\n", triangle(n));
}
/*
#include <stdio.h>
#include <inttypes.h>

#define MAX_N 1000000

int num[MAX_N + 5] = {0};
int min_num[MAX_N + 5] = {0};
int prime[MAX_N + 5] = {0};

void init_prime() {
	for (int i = 2; i <= MAX_N; i++) {
		if (!prime[i]) {
			prime[++prime[0]] = i;
			num[i] = 1 + i;
			min_num[i] = i * i;
		}
		for (int j = 1; j <= prime[0]; j++) {
			if (prime[j] * i > MAX_N) break;
			prime[prime[j] * i] = 1;
			if (i % prime[j]) {
				num[prime[j] * i] = num[prime[j]] * num[i];
				min_num[prime[j] * i] = min_num[prime[j]];
			} else {
				min_num[prime[j] * i] = min_num[i] * prime[j];
				num[prime[j] * i] = num[i] * (1 - min_num[prime[j] * i]) / (1 - min_num[i]);
				break;
			}
		}
	}
	return ;
}

int64_t triangle(int64_t n) {
	return n * (n - 1) / 2;
}

int main() {
	init_prime();
//	for (int i = 2; i <= 50; i++) {
//		printf("(%3d : %3d %3d) ", i, num[i], min_num[i]);
//		if (i % 6 == 0) {
//			printf("\n");
//		}
//	}
	int n = 1;
	while (1) {
		if (n % 2 == 1) {
			if (num[n] * num[(n - 1) / 2] >= 500) break;
		} else {
			if (num[n / 2] * num[n - 1] >= 500) break;
		}
		n++;
	}
	printf("%" PRId64 "\n", triangle(n));
	return 0;
}*/
