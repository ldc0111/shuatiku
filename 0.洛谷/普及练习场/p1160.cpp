#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
int N,k,p,M,x,head;
struct ren{
	int zuo,you;
	
}stu[100002];

int main(){
	cin >> N;
	head = 1;
	memset(stu,0,sizeof(stu));
	for(int i = 2; i <= N; i++){
		cin >> k >> p;
		if(p == 0){
			stu[i].zuo = stu[k].zuo;// ji cheng
			stu[(stu[k].zuo)].you = i;
			stu[k].zuo = i;//gai
			stu[i].you = k;//gai 
		}   
		else{
			stu[i].you = stu[k].you;
			stu[(stu[k].you)].zuo = i;
			stu[k].you = i;
			stu[i].zuo = k;
		}         
	}
	cin >> M;
	for(int i = 0; i < M; i++){
		cin >> x;
		if(stu[x].zuo == -1){
			continue;
		}
		stu[(stu[x].zuo)].you = stu[x].you;
		stu[(stu[x].you)].zuo = stu[x].zuo;
		stu[x].zuo = -1;
		stu[x].you = -1;
	}
	
	for(int i = 1; i <= N; i++){
		if(stu[i].zuo == 0){
			head = i;
		}
	}
	if(head != 0){
	printf("%d", head);		
	}
	head = stu[head].you;
	if(head == 0){
		return 0;
	}
	do{
		printf(" %d",head);
		head = stu[head].you;
	} while (head != 0);
	 
	return 0;
}
 
