#include <stdio.h>
//先系数0 -1 1  正负
//第一项 中间项  最后2 最后项  
int main() {
	int n;
	int a[103] = {0};
	int ci = 0;
	
	scanf("%d", &n);
	ci = n;
	for(int i = 1; i <= n+1; i++) {
		scanf("%d", &a[i]);
	}
	
	for(int i = 1; i <= n+1; i++) {
		if(i == n+1) { //最后项 
		    if(a[i] == 0) {
		    	ci--;
		    	continue;
			} else if(a[i] == -1) {
				printf("%d",a[i]);
			} else if(a[i] == 1){
				printf("+%d", a[i]);
			} else if(a[i] < 0){
				printf("%d", a[i]);
			} else  {
				printf("+%d", a[i]);
			}
			
		} else if(i == n){//倒数二项 
			if(a[i] == 0) {
				ci--;
				continue;
			} else if(a[i] == -1) {
				ci--;
				printf("-x");
			} else if(a[i] == 1){
				ci--;
				printf("+x");
			} else if(a[i] < 0){
				ci--;
				printf("%dx", a[i]);
			} else  {
				ci--;
				printf("+%dx", a[i]);
			}
		} else if(i == 1) {//第一项
		    if(a[i] == 0) {
		    	ci--;
		    	continue;
			} else if(a[i] == -1) {
				printf("-x^%d",ci--);
			} else if(a[i] == 1){
				printf("x^%d", ci--);
			} else if(a[i] < 0){
				printf("%dx^%d", a[i], ci--);
			} else  {
				printf("%dx^%d", a[i], ci--);
			}		
		} else {// 中间项 
		    if(a[i] == 0) {
		    	ci--;
		    	continue;
			} else if(a[i] == -1) {
				printf("-x^%d",ci--);
			} else if(a[i] == 1){
				printf("+x^%d", ci--);
			} else if(a[i] < 0){
				printf("%dx^%d", a[i], ci--);
			} else  {
				printf("+%dx^%d", a[i], ci--);
			}			
		}
	} 
	
	return 0;
}


