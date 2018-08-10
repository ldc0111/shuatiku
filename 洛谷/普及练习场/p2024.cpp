#include <cstdio>
#define maxn 100005
#define f(i , a , b) for(int i = a; i <= b; i++ )
int input() {
	char c = getchar();
	int n = 0;
	while(c < '0' || c > '9') c = getchar();
	while(c >= '0' && c <= '9') n = (n << 1) +(n << 3) +(c - 48),  c = getchar();
	return n;
}
int v[maxn * 3];
int find(int x) {
	return v[x] == x ? v[x] : (v[x] = find(v[x]));
}
int main() {
	int n = input() , m = input() , a , b , c , s = 0;
	//n 个动物 k句话  a那种情况， s = 假话数 
	f(i , 1 , n*3) v[i] = i; 
	f(i , 1 , m){
		a = input() , b = input() , c = input();
		if(b > n || c > n) s++;
        else {
		    if(a == 1) {
			    //检查 b 吃不吃c  c吃不吃b 
			    if(find(b + n) == find(c) || find(b) == find(c + n)) s++; else
			     v[find(b)] = v[find(c)] , v[find(b + n)] = v[find(c + n)], v[find(2*n+b)] = v[find(2 * n + c)];
			     
		    } else {
			    if(find(b) == find(c)|| find(b) == find(c + n)) s++; else//b 吃c 
			    v[find(b + n)] = v[find(c)], v[find(b + n*2)] = v[find(c + n)] , v[find(b)] = v[find(2 * n + c)];
		}
    }		
		
	}
	
	
	printf("%d" , s);
	return 0;
}
