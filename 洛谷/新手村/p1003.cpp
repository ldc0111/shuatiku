#include <stdio.h>
#include <string.h>

struct ditan {
	int a, b;
	int x,y;
}ar[10002];

int zai(int i,int x,int y) {
	if((x >= ar[i].a) && (x <= ar[i].a + ar[i].x)&&
	   (y >= ar[i].b) && (y <= ar[i].b + ar[i].y)) {
		return 1;
	}
	
	return 0;
}

int main() {
	int n;
	int x1,y1;
	memset(ar, '0', sizeof(ar));
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d %d %d %d", &ar[i].a, &ar[i].b, &ar[i].x, &ar[i].y);
	}
	
	scanf("%d %d", &x1, &y1);
	for(int i = n; i>=1; i--) {
		if(zai(i,x1, y1)) {
			printf("%d\n", i);
			break;
		}
		if(i  == 1) {
			printf("-1\n");
		}
	}
	if(n == 0) {
		printf("-1");
	}
	return 0;
}

