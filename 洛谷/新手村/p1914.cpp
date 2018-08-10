#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[150] = {'0'};
	int n;
	int tmp;
	scanf("%d", &n);
	scanf("%s", a);
	
	n = n % 26;
	for(int i = 0; i < strlen(a); i++) {
		 tmp = a[i] + n;
		 if(tmp  <= (int)'z') {
		 	a[i] = (char)tmp;
		 }else {
		 	tmp -= 26;
		 	a[i] = (char)tmp;
		 }
	}
	
	printf("%s\n", a);
} 
