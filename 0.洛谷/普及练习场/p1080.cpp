#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n, l = 1,g[10010];
//l ���� 
// a �˻� b ���� c ���� 
struct ren{
	int zuo;
	int you;
	long long a_b; 
}a[1003];
bool comp(ren c,ren b){
	return c.a_b < b.a_b; 
}
void gje(int x){
	for(int i = 1; i <=l; i++) g[i] *= a[x].zuo;
	//mei yi wei dou cheng
	for(int i = 1; i <= l; i++){
		g[i + 1] += (g[i] / 10);
		//jinwei
		g[i] = g[i]%10;
	}
	l++;
	while(g[l] > 9){
		g[l + 1] +=(g[l] / 10);
		// jinwie 
		g[l]  %= 10;
		// chuli
		l++; 
	}
	if(g[l] == 0) l--;
}

void gju(){
	for(int i = l; i >= 1; i--){
		g[i - 1] += ((g[i]%a[n].you) * 10);// ��һλ 
		g[i] /= a[n].you; //��һλ 
	}
	while(g[l] == 0) l--;
	if(l == 0) printf("1\n");//��ֹ���� 
}

int main(){
	scanf("%d", &n);
	scanf("%d %d",&a[0].zuo, &a[0].you);
	for(int i =1; i <=n; i++) {
		scanf("%d %d",&a[i].zuo, &a[i].you);
		a[i].a_b = a[i].zuo*a[i].you;
	}
	sort(a + 1,a+n+ 1,comp);
	g[1] = a[0].zuo;
	for(int i =1;i < n; i++){
		gje(i);
	}
	gju();
	
	for(int i = l; i>= 1; i--) printf("%d",g[i]);
	
	return 0;
} 
