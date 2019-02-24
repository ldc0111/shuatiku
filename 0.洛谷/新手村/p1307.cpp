#include <stdio.h>
#include <string.h>
int main() {
	char a[14];
	int len;
	char c;
	int j = 0;
	scanf("%s", a);
	
	len = strlen(a);
	
	for(int i = 0; i < len/2; i++) {
		 c = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = c;
	}
	for(j = 0;j < len;j++) {
		if(a[j] != '0')
		break;
	}
	if(a[len-1] == '-') {
		printf("-");
	    for(;j < len-1; j++) {
	    	if(a[j]<= '9' && a[j] >= '0')
        	printf("%c",a[j]);
	    }			
	}else {
	    for(;j < len; j++) {
	    	if(a[j]<= '9' && a[j] >= '0')
        	printf("%c",a[j]);
	    }
			
	}
		
	return 0;
} 
