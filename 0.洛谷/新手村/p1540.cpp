#include <stdio.h>
#include <string.h>
typedef struct {
	int lin;//�������� 
	int ge;//�ڴ��м��� 
	int nei;//�ڴ��С 
}can;

int m1[103];
can k; 
int p = 1;//�Ķ�ͷָ�� 
int queue() {
	int i;
	for(i = 1; i <=k.ge; i++) {
		if(m1[i] == k.lin) {
			return 0;
		}
	}
	if(i > k.ge) {//û�ҵ� 
		if(k.ge < k.nei) {//û�� 
			int j;
			for(j = 1; m1[j] != -1 && j <= k.nei; j++);
			m1[j] = k.lin;
			k.ge++;
		} else {//���� 
			m1[p] = k.lin;
			p++;
			p = p % k.nei;
			if(p == 0) {
				p = 1;
			}
		}
	}
	return 1; 
}




int main() {
	int m,n;
	int tmp = 0;
	memset(m1,-1,sizeof(m1));
	
	scanf("%d %d", &m, &n);
	k.ge = 0;
	k.nei = m;	
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &k.lin);
		
		if(queue()) {
			tmp++;
		}
	}
	printf("%d\n",tmp);
	return 0;
}
