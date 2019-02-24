#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//可以把输入与初始化b[]一起 
int main() {
	char a[4][100];
	int b[26] = {0};
	int tmp = 0;
	int max = 0;
	
	memset(a, '0', sizeof(a));
	for(int i = 0; i < 4; i++) {
		gets(a[i]);
	}
	
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < strlen(a[i]); j++) {
			if(a[i][j] <= 'Z' && a[i][j] >= 'A') {
				tmp = (int)a[i][j]-65;
				b[tmp]++;
			}	
		}
	}
	
	for(int i = 0; i < 26; i++) {
		if(b[i] > max) {
			max = b[i];
		}
	}
	//没问题 
	while(max) {
		int i;
		for(i = 0; i < 26; i++) {
			if(b[i] == max) {
				printf("*");
				b[i]--;
			} else {
				printf(" ");
			}
			printf(i < 25?" ":"");
		}
		printf("\n");
		max--;
	}
	for(char a = 'A'; a < 'Z'; a++) {
		printf("%c ", a);
	}
	printf("Z");
//	printf("\n");
	return 0;
}
