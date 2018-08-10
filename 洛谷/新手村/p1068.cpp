#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
struct number{
	int k;
	int s;
}num[5005];
bool comp(number a, number b) {
	if(a.s == b.s) {
		return a.k < b.k;
	} else {
		return a.s > b.s;
	}
	
}


int main(){
	int n, m;
	int s1 =0;
	int tmp = 0;
	scanf("%d %d", &n,&m);
	
	for(int i = 1; i <= n; i++) {
		scanf("%d %d",&num[i].k, &num[i].s);
	} 
	sort(num+1, num+1+n, comp);
	m *=1.5; 
	s1 = num[m].s;
	
	for(int i = 1; num[i].s >= s1; i++) {
		tmp++;
	}
	printf("%d %d\n", s1, tmp);	
	for(int i = 1; i <= tmp; i++) {
		printf("%d %d\n", num[i].k, num[i].s);
	}
	
	return 0;
}



/*
	for(int i =1; i <= n; i++) {
		for(int j = i+1; j <= n; j++) {
			if(num[i].s == num[j].s && num[i].k > num[j].k) {
				int tmp = num[i].k;
				num[i].k = num[j].k;
				num[j].k = tmp;
			}
		}
	}
	


*/
