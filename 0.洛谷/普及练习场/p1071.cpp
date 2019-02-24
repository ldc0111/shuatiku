#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int a[27];
int b[27];
string mi,yuan,fan;

int main(){
	cin >>mi >> yuan >> fan;
	memset(a,-1,sizeof(a));
	if(mi.length() < 26){
		printf("Failed\n");
		return 0;
	}
	for(int i = 0; i <mi.length(); i++){
		if(a[(mi[i] - 'A'+1)] == -1||a[(mi[i] - 'A'+1)] == yuan[i]-'A'){
			a[(mi[i] - 'A'+1)] = yuan[i]-'A';//fangru   1-26
		} else {
			printf("Failed\n");
			return 0;
		}
	}
	for(int i =1; i <= 26; i++){
		if(a[i] == -1){
		    printf("Failed\n");
		    return 0;			
		}
	}
	for(int i = 0; i < 27; i++){
		b[i] = a[i];
	}
	sort(b,b+27);
	for(int i = 2; i <= 26; i++){
		if(b[i] == b[i - 1]){
			printf("Failed\n");
			return 0;
		}
	}
	for(int i = 0; i < fan.length(); i++){
		fan[i] = 'A' + a[fan[i] -'A' + 1];
	}
	
	cout << fan << endl;
	
	return 0;
	
}
 
