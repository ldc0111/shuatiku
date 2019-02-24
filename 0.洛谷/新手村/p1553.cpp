#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char s[30];
	char  tmp;
	int cnt =  0;
	int x,k;
	memset(s, '\0', sizeof(s));
	scanf("%s", s);
	
	for(int i = 0; i < strlen(s); i++) {
		if(s[i] <= '9' && s[i] >= '0') {
			cnt++;
		} else {
			break;
		}
	}
	tmp = s[cnt];
	x = cnt;
	cnt--;
	
	while(s[cnt] == '0' && cnt >0) cnt--;
	for(int i = cnt; i >=0; i--) {
		printf("%c", s[i]);
	}
	
	if(tmp == '\0') {
		return 0;
	} else {
		if(tmp == '%') {
			printf("%c", tmp);
			return 0;
		} else {
			printf("%c",tmp);
		}
	}
	k = strlen(s)-1;
	while(s[x+1]  == '0'&& x < k-1) x++;//即使全为0,x最大为k-1 
	while(s[k] == '0' && k > x+1 ) k--;//kz最小为x+1，保存一个数
	
	for(int i = k; i > x ;i--) {
		printf("%c", s[i]);
	}
	
	return 0;
}
/*
int main() {
	char s[50] = {'0'};
	char a;
	int i, j, tag;
	int tmp = 0;
	gets(s);
	
	for(i = 0; i < strlen(s); i ++) {
		if(s[i] == '.'|| s[i] == '/') break;
	}
	tag = i;
	if(s[i] == '.' || s[i]== '/') {
		
		for(j = 0; j < i/2; j++) {
			a = s[j];
			s[j] = s[i-1-j];
			s[i-1-j] = a;
		}
		for(j = i+1; j < (strlen(s)+i+1)/2; j++) {
			a = s[j];
			s[j] = s[strlen(s)-1-(j-i-1)];
			s[strlen(s)-1+(j-i-1)] = a;
		}
	} else if(s[strlen(s)-1] == '%'){
		for(j = 0; j < (strlen(s)-1)/2; j++) {
			a = s[j];
			s[j] = s[strlen(s)-2-j];
			s[strlen(s)-2-j] = a;
		}
	} else {
		for(j = 0; j <strlen(s)/2; j++) {
			a = s[j];
			s[j] = s[strlen(s)-1-j];
			s[strlen(s)-1-j] = a;
		}
	}
	
	j = 1;
	




}	if(s[tag] == '.') {
		for(int i = strlen(s)-1;  i > tag; i--) {
			if(s[i] == '0') {
				tmp++;
			}
		}
	}
	for(i = 0; i < strlen(s)-tmp; i++) {
		if(s[i] == '0' && j == 1) {
			continue;
		}
		printf("%c", s[i]);
		j = 0;
		if(s[i] == '/' || s[i] == '%') {
			j = 1;
		}
	}
	
*/
