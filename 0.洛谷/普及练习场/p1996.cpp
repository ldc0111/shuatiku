#include <iostream>
#include <cstdio>

using namespace std;
int n,m,k;
bool a[102] = {0};
int main(){
	cin >> n >> m;
	 k = n;
	 int i = 0;
	 if(n == 0 || m == 0){
	 	return 0;
	 } 
	 while ( k > 0){
	 	for(int j = 1; j < m; j++,i = (i + 1) % n){
	 		while(a[i] != false) 
			 i = (i + 1) % n;//zhaohuoren	
		 }
		 while(a[i] != false) i = (i + 1) % n;// 找最后一个点 
		 
	 	if (k > 1)    printf("%d ", i + 1);
	 	else          printf("%d", i + 1);
		k--;
		a[i] = true;
		if(k > 0){
			while(a[i] != false) i = (i + 1) % n;// 找第一个点 
		}		 
	 }
	return 0;
}
/*
	 		if (k > 1)    printf("%d ", i);
	 		else          printf("%d", i);

*/
