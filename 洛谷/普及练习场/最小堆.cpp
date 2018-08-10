#include<stdio.h>

int swap(int a, int b) {
	int c = a;
	a = b;
	b = c;
}
 int min(int a[], int n, int k) {
 	int i = 0;
 	
 	for (i = 1; i<= n; i++) {
 		if (a[i] > a[2*i] && 2*i <=n) {
 			swap(a[i], a[2*i]);
		 }
 		
 		if (a[i] > a[2*i+1] && (2*i+1) <= n) {
 			swap(a[i], a[2*i+1]);
		 }
	 }
	return 0;
}

int mincha(int a[], int n, int tmp) {
	int k = n+1;
	a[k] = tmp;
	
	while(k > 1 ){
		if(a[k/2] > a[k]) {
			swap(a[k/2], a[k]);
		}
		k /= 2;
	}
	return 0;
}

int minshan(int a[], int n) {
	swap(a[n], a[1]);
	n--;
	for(int i = 1; i <= n; i++){
		if (a[i] > a[2*i] && 2*i <=n) {
 			swap(a[i], a[2*i]);
		 }
 		
 		if (a[i] > a[2*i+1] && (2*i+1) <= n) {
 			swap(a[i], a[2*i+1]);
		 }
	}
	return a[n+1];
}
int main() {
	int a[10] = {0, 9, 3, 7, 6, 5, 1, 10, 2};
	
	min(a, 8, 1);
	
	for (int i = 1; i<= 8; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
