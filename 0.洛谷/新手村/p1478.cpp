#include <bits/stdc++.h>
using namespace std;

struct APPle{
	int xi;
	int yi;
}ap[5003];

bool comp(APPle a, APPle b) {
	return a.yi < b.yi;
}
int main() {
	int n, s;
	int a, b;
	int tmp = 0;
	
	memset(ap,'0',sizeof(ap));
	scanf("%d %d", &n, &s);
	scanf("%d %d", &a, &b);
	
	for(int i = 0; i < n; i++) {
		scanf("%d %d",&ap[i].xi, &ap[i].yi);
	}
	
	if(n == 0) {
		printf("0");
		return 0; 
	} else {
		sort(ap, (ap+n-1), comp);
	}
	
	
	
	for(int i = 0; i < n; i++) {
		if(a+b >= ap[i].xi && s >= ap[i].yi) {
			s -= ap[i].yi;
			tmp++;	
		}
	}
	printf("%d\n", tmp);
	return 0;
}


/*//少算一次应是4 写乘3 
	for(int i = 0; i < n; i++) {
		
		if(a+b >= ap[i].xi) {
			s -= ap[i].yi;
			if(s  >= 0) {
			    tmp++;
		    } else {
			    brak;
		    }	
		}
	}

	for(int i = 0; i < n; i++) {
		if(a+b >= ap[i].xi && s >= ap[i].yi) {
			s -= ap[i].yi;
			tmp++;	
		}
	}

*/
