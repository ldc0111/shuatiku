#include<iostream>
#include<queue>
#include<functional>
#include<vector>
using namespace std;
int main() {
	int n , j, i;
	cin >> n;
	priority_queue<int ,vector<int>,greater<int> >q;
	int x = 0;
	for(i = 0 ;i < n;i++) {
		cin >> x; 
		q.push(x);
	}
	int sum=0;
	int a = 0,b = 0;
	if(q.size()==1) {
		a = q.top();
		sum = sum+a; 
		 q.pop();
	}
	int t = 0;
	while(q.size()>1) {
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		t = a+b;
		sum = sum + t;
		q.push(t);
	}
	cout << sum;
}

