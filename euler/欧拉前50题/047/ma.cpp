/*************************************************************************
	> File Name: ma.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年08月05日 星期日 16时28分40秒
 ************************************************************************/
#include <iostream>
#include <cinttypes>
using std::cin;
using std::cout;
using std::endl;

#define NUM 72

int main() {
    int64_t num = NUM, ans = 0;
    for (int64_t i = 2; i * i <= num; i++) {
        if (num % i) continue;
        while (num % i == 0) num /= i;
        ans = i;
    }
    if (num != 1) ans = num;
    printf("%" PRId64 "\n", ans);
    return 0;
}
