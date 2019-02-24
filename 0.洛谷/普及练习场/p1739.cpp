#include <iostream>
#include <string>
#include <cstdio> 
using namespace std;
string str;
int temp = 0;
int main(){
	cin >> str;
	
	for(int i = 0; i < str.length(); i++){
		if(temp < 0) break; 
		else if(str[i] == '(') temp++;
		else if(str[i] == ')') temp--;
    }
    if(temp == 0) printf("YES\n");
    else          printf("NO\n");
    return 0;
} 
