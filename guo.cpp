#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10000000

int prime[MAX + 5] = {0};

void init() {
    for (int i = 2; i < MAX; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
        }
        for (int j = 1; i * prime[j] <= MAX && j <= prime[0]; j++) {
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int binary(int n) {
    int low = 1, high = prime[0], mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (prime[mid] == n) return 1;
        else if (prime[mid] < n) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int valid(int a) {
    int temp = a, num = 0;
    while (temp){
        num = num * 10 + temp % 10;
        temp /= 10;
    }
    return num == a;
}

int digit(int n) {
    return floor(log10(n)) + 1;
}

int main() {
    init();
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (digit(i) > 3 && digit(i) % 2 == 0) i = (int)pow(10, digit(i));
        if (i % 2 == 0) continue;
        if (!valid(i)) continue;
        if (!binary(i)) continue;
        printf("%d\n", i);
    }
    return 0;
}
