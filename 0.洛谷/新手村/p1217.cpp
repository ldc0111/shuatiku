#include <bits/stdc++.h>
using namespace std;
int zhishu(int n) {
	for(int i = 2; i <=sqrt(n); i++) {
		if(n%i == 0) {
			return 0;
		}
	}
	return 1;
}
int wei(int n) {
	int tmp = 1;
	while(n/10) {
		tmp++;
		n /= 10;
	}
	return tmp;
}
int hui(int n, int a1){
	
	int s[7] = {0};
	switch(a1) {
		case 1: {
			return 1;
		}
		case 3: {
			for(int i = 0; i < a1; i++) {
				s[i] = n%10;
				n /= 10;
			}
			if(s[0] == s[2]) {
				return 1;
			}
			break;
		}
		case 5: {
			for(int i = 0; i < a1; i++) {
				s[i] = n%10;
				n /= 10;
			}
			if(s[0] == s[4] && s[1] == s[3]) {
				return 1;
			}
			break;
		}
		case 7: {
			for(int i = 0; i < a1; i++) {
				s[i] = n%10;
				n /= 10;
			}
			if(s[0] == s[6] && s[1] == s[5] && s[2] == s[4]) {
				return 1;
			}			
			break;
		}
	}
	return 0;
}

int main() {
	int a1,b1;
	int tmp=0;
	int a, b;
	int ap[10] = {0,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
	scanf("%d %d", &a, &b);
	
	a1 = wei(a);
	b1 = wei(b);
	if(a <= 11 && b>=11) {
		tmp++;
	}

	for(int i =  a1; i <= b1 && i < 8; i++){
		if(i == 1) {
			for(int j = a; j <ap[i] && j <= b; j++) {
				if(zhishu(j)) {
					printf("%d\n", j);
				}
			}
		} else if(i == 2){
	        if(a <= 11 && b>=11) {
	        	printf("11\n");
	}			
		} else if(i %2 == 0) {
			continue;
		} else if(i == a1) {
			for(int j = a; j < ap[i] && j <= b; j++) {
				if(hui(j, i) && zhishu(j) ) {
					printf("%d\n", j);
				}
			}
		} else if(i == b1){
			for(int j = ap[i-1];j <= b; j++) {
				if(hui(j, i) && zhishu(j)) {
					printf("%d\n", j);
				}
			}			
		} else {
			for(int j = ap[i-1]; j < ap[i]; j++) {
				if(hui(j, i) && zhishu(j)) {
					printf("%d\n", j);
				}
			}
		}
	}	
	return 0;
}
