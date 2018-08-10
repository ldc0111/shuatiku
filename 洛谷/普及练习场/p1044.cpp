#include <iostream>

using namespace std;
long n, f[20][20] = {0};
/*
x队列里元素的个数 y 栈里元素的个数 
f[x][y] = f[x][y - 1] + f[x - 1][y + 1]; 
*/
 
long dfs(int x, int y) {//x 原队列的个数， 栈里的个数 
	if(f[x][y] != 0)     return f[x][y];
	 if(x == 0)          return 1;//原队列里没有数之后 只能出栈
	 if(y > 0)           f[x][y] += dfs(x,y - 1);//加上需要出栈的情况 
	 f[x][y] +=  dfs(x - 1, y + 1); //从队列里进入栈里； 
	 
	 return f[x][y];
}

int main() {
	cin >> n;
	cout << dfs(n,0) << endl; 	
	return 0;
}
