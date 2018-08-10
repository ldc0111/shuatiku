#include <stdio.h>

int main() {
	long int x, n;
    double sum = 0;
	
	scanf("%d %d", &x, &n);
	
	for (int i = 1;i <= n; i++) {
		if (x == 8) {
			x = 1;
		}
		
		if (x > 5) {
			x++;
			continue;
		} else  {
			sum += 250;
		}
		x++;
    }
    printf("%0.0lf\n", sum);
     return 0;   
}
