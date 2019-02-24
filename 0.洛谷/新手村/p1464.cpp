#include <stdio.h>
int w1[22][22][22] = {0};
int w(int a, int b, int c) {
	if(a <= 0 || b <=0 || c <= 0) {
		if(w1[0][0][0] == 0) {
			 w1[0][0][0]= 1;
		}
		return w1[0][0][0];
	} else if(a > 20 || b > 20 || c > 20) {
		if(w1[20][20][20] != 0) {
			return w1[20][20][20];
		} else {
		    return w(20, 20, 20);			
		}
	} else if(a < b && b < c){
		if(w1[a][b][c] != 0) {
			return w1[a][b][c];
		} else {
			w1[a][b][c] = w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
			return w1[a][b][c] ;
		}
	} else {
		if(w1[a][b][c] != 0) {
			return w1[a][b][c];
		} else {
			w1[a][b][c] = w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
			return w1[a][b][c];
		}
	}
}

int main() {
	int a,b,c;
	int sum = 0;
	
	while(scanf("%d %d %d",&a, &b, &c) != EOF) {
		if(a == -1 && b == -1 && c == -1) {
			return 0;
		}
		sum = w(a,b,c);
		printf("w(%d, %d, %d) = %d\n", a, b, c, sum);
	}
	
	
	
	
	return 0;
}

