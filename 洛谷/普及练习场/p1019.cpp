#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

string st[20];//�ַ��� 
int s[20] = {0};//����ͳ�� 
int n;// �ܵ��� 
char a;//��ʼ��ĸ 
int max1 = 0;
int zan = 0;
void dfs(string tap){
	
	for(int i = 0;i < n; i++) {//�������е��� 
		if(s[i] < 2) {//�鿴���ʴ���
		    for(int k = 1;k < tap.length();k++){//�ӵڶ�����ĸ��ʼƥ��
		        int j = tap.length()-k;
		        int f = j;
		        while(j > 0&& (f-j) < st[i].length() &&tap[tap.length()-j] == st[i][(f-j)]) j--;//ƥ��ɹ�j==0,
		        
		        if(j == 0){//�ɹ� 
		            zan += st[i].length()-f;
		            if(zan > max1) {
		            	max1 = zan;
					}
					s[i]++;
					dfs(st[i]);
					//����
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
