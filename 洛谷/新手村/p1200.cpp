#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char a[9] = {'0'};
	char b[9] = {'0'};
	int suma = 1, sumb = 1;
	
	scanf("%s", a);
	scanf("%s", b);
	
	for (int i = 0; i < strlen(a); i++) {
		suma *=(int)(a[i]-64);
	}
	for(int i = 0; i < strlen(b); i++) {
		sumb *=(int)(b[i]-64);
	}
	
	if ((suma % 47)== (sumb % 47)) {
		printf("GO\n");
	} else {
		printf("STAY\n");
	}
}
