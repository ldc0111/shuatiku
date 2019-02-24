#include <stdio.h>
//最后一个123 456 789 
int main() {
	int A,B,C;
	int tmp = 0;
	int a, b,c;
	scanf("%d %d %d", &A, &B, &C);
	
	for(int i = 1; i < 987; i++) {
		a = A*i;
		b = B*i;
		c = C*i;
		
		
		if((a >987) || (b > 987) || (c > 987) ) {
			break;
		}
		if((a/100+a%100/10+a%10+b/100+b%100/10+b%10+c/100+c%100/10+c%10) == 45 &&
		 ((a/100)*(a%100/10)*(a%10)*(b/100)*(b%100/10)*(b%10)*(c/100)*(c%100/10)*(c%10)) == 362880) {
		 	printf("%d %d %d\n",a, b, c);
		 	tmp++;
		 }//取余符号一定要括起来 
	}
	if(tmp == 0){
		printf("No!!!\n");
	}
	return 0;
} 
