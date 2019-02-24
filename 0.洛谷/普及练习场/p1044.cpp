#include <iostream>

using namespace std;
long n, f[20][20] = {0};
/*
x������Ԫ�صĸ��� y ջ��Ԫ�صĸ��� 
f[x][y] = f[x][y - 1] + f[x - 1][y + 1]; 
*/
 
long dfs(int x, int y) {//x ԭ���еĸ����� ջ��ĸ��� 
	if(f[x][y] != 0)     return f[x][y];
	 if(x == 0)          return 1;//ԭ������û����֮�� ֻ�ܳ�ջ
	 if(y > 0)           f[x][y] += dfs(x,y - 1);//������Ҫ��ջ����� 
	 f[x][y] +=  dfs(x - 1, y + 1); //�Ӷ��������ջ� 
	 
	 return f[x][y];
}

int main() {
	cin >> n;
	cout << dfs(n,0) << endl; 	
	return 0;
}
