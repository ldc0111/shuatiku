#include <bits/stdc++.h>
using namespace std;

int pr(int tmp) {
	if(tmp < 2) {
		return 0;
	}
	for(int i = 2; i*i <= tmp ; i++) {
		if(tmp % i == 0) {
			return 0; 
		}
	}
	return 1;
}

//有0号元素 
int main() {
	int ap[27] = {-1};
	memset(ap,-1,sizeof(ap));
	int maxn = -1;
	int minn = 99999999; 
	string word;
	
	cin >> word;
	for(int i = 0; i < word.length(); i++) {
		if(ap[(word[i]-'a'+1)] == -1) {//出现了
			ap[(word[i]-'a'+1)] = 0;
		}
		ap[(word[i]-'a'+1)]++;
	}
	
	for(int i = 1; i <= 26; i++) {
		if(ap[i] > 0) {
		    if(ap[i] < minn) {
			    minn = ap[i];
		    }
		    if(ap[i] > maxn) {
			    maxn = ap[i];
		    }	
		} else {
			continue;
		}
		
	}
	
	if(pr(maxn-minn)) {//是素数 
		printf("Lucky Word\n");
		printf("%d\n",maxn-minn);
	} else {
		printf("No Answer\n");
		printf("0\n"); 
	}
	
	return 0;
}
