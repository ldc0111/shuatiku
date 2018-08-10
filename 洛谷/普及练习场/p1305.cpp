#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>
using namespace std;
int n;
string str[30];

struct tree{
	char ch;
	struct tree *zuo,*you;
	int ro;
}tr[30];
void biao(tree *st,int k){
	st->ro = k;
	if(st->zuo != NULL) biao(st->zuo,k);
	if(st->you != NULL) biao(st->you, k);
}

tree* findtree(char ch,int k){//标记跟节点xia biao 
	for(int i = 0; i < n; i ++){
		if(tr[i].ch == ch){
			biao(&tr[i],k);
			return &tr[i];
		}
	}
}
void qian(tree * st){
	cout << st->ch;
	if(st->zuo != NULL) qian(st->zuo);
	if(st->you != NULL) qian(st->you);
}

int main(){
	memset(tr,0,sizeof(tr));
	cin >> n;
	if(n == 0) return 0;
	for(int i = 0; i < n; i++){
		cin >> str[i]; 
	}	
	for (int i = 0; i < n;i++){//建立所有节点 
		tr[i].ch = str[i][0];
	}
	for (int i = 0; i < n; i++){
		if(str[i][1] != '*') 	tr[i].zuo = findtree(str[i][1], i);
		if(str[i][2] != '*')    tr[i].you = findtree(str[i][2], i);
	}
	
	tree * root = &tr[tr[0].ro];
	qian(root);
	cout << endl;
	return 0;
}
