#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

string st[20];//字符串 
int s[20] = {0};//次数统计 
int n;// 总单词 
char a;//开始字母 
int max1 = 0;
int zan = 0;
void dfs(string tap){
	
	for(int i = 0;i < n; i++) {//遍历所有单词 
		if(s[i] < 2) {//查看访问次数
		    for(int k = 1;k < tap.length();k++){//从第二个字母开始匹配
		        int j = tap.length()-k;
		        int f = j;
		        while(j > 0&& (f-j) < st[i].length() &&tap[tap.length()-j] == st[i][(f-j)]) j--;//匹配成功j==0,
		        
		        if(j == 0){//成功 
		            zan += st[i].length()-f;
		            if(zan > max1) {
		            	max1 = zan;
					}
					s[i]++;
					dfs(st[i]);
					//回溯
					s[i]--;
					zan -= st[i].length()-f;
				} 
		    }
		}
	}
	
}



int main() {	
	scanf("%d",&n);
	
	for(int i = 0;i < n; i++) {
		cin >> st[i];
	}
	cin >> a;
	//
	//scanf("%c",&a);
	
	for(int i = 0; i < n; i++){
		if(a == st[i][0]) {
			memset(s,0,sizeof(s));
			zan = 0;
			s[i]++;
			zan = st[i].length();
			if(zan > max1) {
				max1 = zan;
			}
			dfs(st[i]);
			
		}
	}
	
	printf("%d",max1);
	
	return 0;
} 
