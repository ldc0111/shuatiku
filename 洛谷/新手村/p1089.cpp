#include <stdio.h>

int main() {
	int a;
	int bai;
	int sheng = 0;
	int yue = 0;
	
	for(int i = 1;i <= 12; i++) {
		scanf("%d", &a);
		sheng +=  300-a;
		
		if( sheng  >= 100) {
			bai += (sheng / 100) * 100;
			sheng = sheng % 100;
		} else if((sheng  < 0) && (yue == 0)) {
			yue = -i;
		}
	}
	
	if(yue < 0) {
		printf("%d\n", yue);
	} else {
		printf("%0.0f\n", bai*1.2+sheng);
	}
	
	return 0;
} 
