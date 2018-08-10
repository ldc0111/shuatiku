#include <iostream>
#include <list>

using namespace std;
list <int> limin,limax;
int n;


int main() {
	cin >> n;
	
	int temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		limin.push_back(temp);
		limax.push_back(temp);
	} 
	
}
