#include <iostream>
#include <cstdio>

using namespace std;
int N,a,max1,he;
int main(){
	cin>> N;
	if(N == 0){
		printf("0");
		return 0;
	}
	cin >> max1;
	he = max1;
	for(int i = 1;i < N; i++){
		cin>> a;
		he += a;
		if(he > max1){
			max1 = he;
		} else if(he < 0){//ÖØÐÂ»ýÀÛ 
			he = 0;
		} else {
			continue;
		} 
		
	} 
	printf("%d\n",max1);
	return 0;
} 
