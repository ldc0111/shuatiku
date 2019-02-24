#include <iostream>
using namespace std;
int n;
int jige(int base){
	int a = 1, i;
	for(i = 0; a <= base; i++){
		a = a << 1;
	}
	return i - 1;
}
void fenzhi(int n) {
	int base=n,k;
	
	while(base > 0) {
		k = jige(base);
		if(k == 0)        cout << "2(0)";
		else if (k == 1)     cout << "2";
		else if (k == 2)     cout << "2(2)";
		else { //k > 2
			cout << "2(";
			fenzhi(k);
			cout << ")";
		}
		base -= 1 << k;
		if(base > 0) {
			cout << "+";
		} else  {//zhinengshi1 大于0 或等于零 
			return ;
		}
	}
}

int main(){
	cin >> n;
	fenzhi(n);
	return 0;
	
}
/*
	int base = n,k;	
	while (base > 0){//ji ceng
	    k = jige(base);
		if(k > 2){
			cout << "2(";
			fenzhi(k);
		} else if(k == 2) {
			cout << "2(2)";
		} else if( k == 1) {
			cout << "2";
		} else if(k == 0){
			cout << "2(0)"; 
		} else {
			
		}
		if(base > (1 << k)){
			base -= 1<<k;
			cout << "+";
		} else {
			cout << ")";
			base = 0;
		}
		
	}

*/






