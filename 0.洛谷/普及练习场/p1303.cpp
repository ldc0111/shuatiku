#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
#define MAX_N 4000
string str1,str2;
int ans[MAX_N] = {0};

int main(){
	cin >> str1;
	cin >> str2;
	int alen = str1.length(), blen = str2.length();
	for(int i = 0,j = alen - 1;i < j;i++,j--){
		swap(str1[i],str1[j]);
	}
	for(int i = 0,j = blen - 1; i < j; i++, j--){
		swap(str2[i],str2[j]);
	}
	for(int i = 0; i < alen; i++){
		for(int j = 0; j < blen; j++){
			ans[i + j] += (str1[i] - '0') * (str2[j] - '0');
		}
	}
	int clen = alen + blen -1;
	//�� ����100 ���ǲ��ô���forѭ���ǰ�/ 10 ȡ�������ӹ�ȥ��ֻ�п������һ�� 
	for(int i = 0; i < clen; i++){
		ans[i + 1] += (ans[i]/10);
		ans[i] %= 10;
		if(ans[i +1] && i+1 >= clen) ++clen;
	}
	//qu diao qiandao 0
	while(clen > 1 && ans[clen -1] == 0) --clen;
	for(int i = clen - 1; i >= 0; i--){
		printf("%d",ans[i]);
	}
	printf("\n");
	return 0; 
}
 
