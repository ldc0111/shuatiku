#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int n;
int wie = 1;
struct shu{
	int l[5005];
	int w;
}lou[3];
void gja(){
	for(int i = 0; i < lou[2].w; i++){
		if((lou[0].l[i] + lou[1].l[i] + lou[2].l[i])/10){// == 1
			lou[2].l[i + 1]++;//xiayiwei +1
			
			if(i + 1 >= lou[2].w){
				lou[2].w++;
			}
		}		
		lou[2].l[i] = (lou[2].l[i] + lou[0].l[i] + lou[1].l[i])%10;
	}
}

int main(){
	cin >> n;
	memset(lou, 0, sizeof(lou));
	lou[0].l[0] = 1;
	lou[0].w = 1;
	lou[1].l[0] = 1;
	lou[1].w = 1;
	lou[2].w = 1;
	for(int i = 2; i <= n; i++){
		for(int i = 0; i < lou[2].w; i++){
			lou[2].l[i] = 0;
		}
		gja();
		for(int j = 0; j < lou[1].w; j++){
			lou[0].l[j] = lou[1].l[j];
		} 
		lou[0].w = lou[1].w;
		for(int j = 0; j < lou[2].w; j++){
			lou[1].l[j] = lou[2].l[j];
		}
		lou[1].w = lou[2].w;
	}
	if(n == 0){
		printf("0\n");
		return 0;
	}if(n == 1 ){
		printf("1\n");
		return 0;
	}
	for(int i = lou[2].w - 1;i >= 0; i--){
		printf("%d",lou[2].l[i]);
	}
	printf("\n");
	return 0;
}
