#include <iostream>
#include <string>
#include <stack>
#include <cstdio>
using namespace std;

string str;
stack <int> st1;
int shu,a,b;
int main(){
	cin>> str;
	
	for(int i = 0; i <str.length() - 1; i++){
		shu = 0;
		while (str[i] != '.'&&str[i] >= '0' && str[i] <= '9') {
			shu += str[i] - '0';
			shu *= 10;
			i++;
		}
		if(str[i] == '.'){
			shu /= 10;
			st1.push(shu);			
		}
	    else if (str[i] == '+') {
	    	a = st1.top();
	    	st1.pop();
	    	b = st1.top();
	    	st1.pop();
	    	st1.push(a+b);
	    	
		} else if (str[i] == '-') {
	    	a = st1.top();
	    	st1.pop();
	    	b = st1.top();
	    	st1.pop();
	    	st1.push(b - a);				
		} else if (str[i] == '*') {
	    	a = st1.top();
	    	st1.pop();
	    	b = st1.top();
	    	st1.pop();
	    	st1.push(a*b);				
		} else if (str[i] == '/'){// /
	    	a = st1.top();
	    	st1.pop();
	    	b = st1.top();
	    	st1.pop();
	    	st1.push(b / a);				
		}
			 
	}
	
	printf("%d\n", st1.top());
	
	return 0;
}

/*
		    if (str[i] == '+') {
		    	a = st1.top();
		    	st1.pop();
		    	b = st1.top();
		    	st1.pop();
		    	st1.push(a+b);
		    	
			} else if (str[i] == '-') {
		    	a = st1.top();
		    	st1.pop();
		    	b = st1.top();
		    	st1.pop();
		    	st1.push(a-b);				
			} else if (str[i] == '*') {
		    	a = st1.top();
		    	st1.pop();
		    	b = st1.top();
		    	st1.pop();
		    	st1.push(a*b);				
			} else {// /
		    	a = st1.top();
		    	st1.pop();
		    	b = st1.top();
		    	st1.pop();
		    	st1.push(a/b);				
			}
*/
