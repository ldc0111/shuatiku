#include <stdio.h>
int isp(int k) {
	if(k == 1) {
		return 0;
	}
	for(int i = 2; i*i <= k; i++) {
		if(k % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n,m;
	int tmp = 0;
	scanf("%d %d",&n,&m);
	
	for(int i = 1; i <= m; i++) {
		scanf("%d",&tmp);
		if(isp(tmp)) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
