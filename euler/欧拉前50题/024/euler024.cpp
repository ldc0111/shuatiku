#include <stdio.h>

#define N_STATUS 1000000
#define MAX_N 10

int a[MAX_N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int main(){
    int n = N_STATUS - 1, max_status = 1, ind = 0;
    while(max_status <= n && ind < MAX_N){
        ++ind;
        max_status *= ind;
    }
    max_status /= ind;
    for(int i = MAX_N - ind; i < MAX_N && n; i++){
        ind--;
        printf("%d %d\n", ind, n);
        int j = i + 1,k;
        while(n >= max_status && j < MAX_N){
            k = a[i]; a[i] = a[j]; a[j] = k;
            n -= max_status; j++;
        }
        max_status /= ind;
    }
    for(int i = 0; i < MAX_N; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
