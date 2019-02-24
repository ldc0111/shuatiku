#include <stdio.h>

int main() {
	int n;
	int tmp = 0;
	int ap[10000][10] = {0};
	scanf("%d", &n);
	int a[11] = {1,1,1,1,1,1,1,1,1,1,1};
	
	if(n < 10 || n > 30) {
		printf("0\n");
		return 0;
	} else {
		for(a[1] = 1; a[1] <= 3; a[1]++)
		for(a[2] = 1; a[2] <= 3; a[2]++)
		for(a[3] = 1; a[3] <= 3; a[3]++)
		for(a[4] = 1; a[4] <= 3; a[4]++)
		for(a[5] = 1; a[5] <= 3; a[5]++)
		for(a[6] = 1; a[6] <= 3; a[6]++)
		for(a[7] = 1; a[7] <= 3; a[7]++)
		for(a[8] = 1; a[8] <= 3; a[8]++)
		for(a[9] = 1; a[9] <= 3; a[9]++)
		for(a[10] = 1; a[10] <= 3; a[10]++) {
			if(a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]+a[10] == n){
				for(int i = 0; i < 10; i++) {
				    ap[tmp][i] = a[i+1];
			    }
			    tmp++;
			}	
		}

	}
	printf("%d\n",tmp);
	for(int i = 0; i < tmp; i++) {
		printf("%d %d %d %d %d %d %d %d %d %d\n",ap[i][0],ap[i][1],ap[i][2],ap[i][3],ap[i][4],
		                                       ap[i][5],ap[i][6],ap[i][7],ap[i][8],ap[i][9]);
	}
	return 0;
}
