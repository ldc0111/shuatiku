#include <stdio.h>

int main() {
	int s,x;
	double su = 7;
	double wei = 0;
	
	scanf("%d %d",&s, &x);
	
	for(int i = 1; wei < s-x; i++) {
		wei += su;
		su *= 0.98;
	} 
	if((wei+su) > s+x) {
		printf("n\n");
	} else {
		printf("y\n");
	} 
	
	return 0;
} 
