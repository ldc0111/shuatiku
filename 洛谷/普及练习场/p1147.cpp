#include <iostream>
using namespace std;

int M;
int main() {
	cin >> M;
	
	for(int i = 1; i < M; i++) {
		int sum = 0;
		for(int j = i;  (j - 1)*2 < M; j++){
		   sum += j;
		   if(sum == M) {
		   	    cout << i << " " << j << endl;
		   } else if(sum > M){
		   	   sum = 0;
		   	   break;
		   }					
		}

	}
	return 0;
}
