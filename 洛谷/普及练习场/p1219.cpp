#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
int n,s = 0;
int a[100] = {0}, b[100] = {0}, c[100] = {0}, d[100] = {0};
//存答案，        存列           下标加相同对角线   下标减相同对角线 
void print(){
	int i;
	s++;
	if( s <= 3) {
		for(i = 1; i <= n; i++)
		cout << a[i] << " ";
	    cout << endl;
	} 
	
}

int search(int i) {
	int j;
	for(j = 1; j <= n; j++) {
		if(b[j] == 0 &&c[i+j] == 0 &&d[i - j + n] == 0) {
			a[i] = j;//覆盖数据 
			b[j] = 1;
			c[i + j] = 1; 
			d[i - j + n] = 1;
			if(i == n) print();
			else search(i + 1);
			
			b[j] = 0;
			c[i + j] = 0; 
			d[i - j + n] = 0; //回溯 
		}
	}
}



int main() {
	cin >> n;
	search(1);
	cout << s << endl;
	return 0;
}


/*
#include <iostream>
#include <string.h>
#include <cmath>
#define maxn 10

using namespace std;
int N;
string a[maxn];
bool arr[20][20] = {0};
int ans = 0;

bool saomiao(int i, int j,bool arr[][20]) {
    for (int m = 1; m <= i - 1; ++m) {  
        for (int n = 1; n <= N; ++n) {  
            if (arr[m][n] == 1) {  
                if ( n == j || abs(i - m) == abs(j - n) ) 
                    return false;  
            }  
        }  
    } 						
	return true;
}

void fang(int ans, bool arr[][20]) {
	if(ans > 3) {
		return ;
	}
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			if(arr[i][j] == true)
			a[ans].push_back(j);
		}
	}
}
void dfs(int ge) {
	if(ge > N) {
		fang(ans++,arr);
		return ;
	}
	
	for(int j = 1; j <= N; j++) {
		arr[ge][j] = true;
		if(saomiao(ge,j,arr)) {//可以放 
			dfs(ge + 1);
		}
		arr[ge][j] = false;	
	}
}


int main() {
	memset(arr,0,sizeof(arr));
	cin >> N;
	dfs(1);
	
	for(int i = 0; i < 3 ; i++) {
		for(int j = 0; j < N; j++){
			cout << (int)a[i][j]<< " ";
		}
		cout << endl;
	}
	cout << ans << endl;
	return 0;
} */
