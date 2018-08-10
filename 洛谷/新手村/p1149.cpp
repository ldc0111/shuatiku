#include <stdio.h>
//  0  1  2  3  4  5  6  7  8  9

//  6  2  5  5  4  5  6  3  7  6

// 2     1
// 4     4    7
// 5     2    3   5
// 6     0    6   9
// 7     8
int ap[10] = {6,2,5,5,4,5,6,3,7,6};
int shu(int k){
	int i, j = 0;
	for(i = k; i!= 0; i /= 10) {
		j += ap[i%10];
	}
	if(k == 0) {
		j += ap[0];
	}
	return j;
}

int main() {
	int i,j;
	int n;
	int tmp = 0;
	scanf("%d", &n);
	
	for(i = 0; i < 1000; i++) {
		for(j = 0; j < 1000; j++) {
			if((shu(i) + shu(j) + shu(i+j)+4) == n) {
				tmp++;
			}
		}
	}
	
	printf("%d\n",tmp);
	return 0;
}


