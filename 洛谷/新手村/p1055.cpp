#include <stdio.h>
#include <string.h>

int main() {
	char a[16] = {'0'};
	int sum  = 0;
	int j = 1;
	scanf("%s", a);
	
	for(int i = 0; i < 12; i++) {
		if(a[i] == '-') {
			continue;
		} else {
			sum += (int)j*(a[i]-48);
			j++;
		}
	}
	if(sum%11 == 10) {
		if(a[12] == 'X') {
			printf("Right\n");
		} else {
			for(int i = 0; i < 12; i++) {
				printf("%c", a[i]);
			}
			printf("X\n");
		}
	} else {
		if( sum%11 == (a[strlen(a)-1]-48)) {
		    printf("Right\n");
	    } else {
		    for(int i =0; i < (strlen(a)-1); i++) {
			    printf("%c", a[i]);
	    	}
		    printf("%d\n", sum%11);
	    }
	}

	return 0;
}

