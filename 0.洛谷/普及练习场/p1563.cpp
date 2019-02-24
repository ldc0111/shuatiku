#include <iostream>
#include <string>
//
using namespace std;
struct xr{
	int mian;
	string name;
}xiaoren[100004];
int n, m;
struct zl{
	int a,s;
}zhiling[100004];

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> xiaoren[i].mian >> xiaoren[i].name;
	}
	for(int i = 0;i < m; i++){
		cin >> zhiling[i].a >> zhiling[i].s;
	}
	
	int index = 0;
	for(int i = 0; i < m; i++){
		if(xiaoren[index].mian == 0){//Àï 
			if(zhiling[i].a == 0){//×ó //jian
			     if(index < zhiling[i].s){
			     	index += n;
			     	index -= zhiling[i].s;
				 } else{
				 	index -= zhiling[i].s;
				 }
				 
			} else{//ÓÒ ¼Ó 
				index += zhiling[i].s;
				index = index%n; 
			}
		} else{//Íâ
		    if (zhiling[i].a == 0){//zuo jia
		         index += zhiling[i].s;
				 index = index % n; 
		    } else{
			     if(index < zhiling[i].s){
			     	index += n;
			     	index -= zhiling[i].s;
				 } else{
				 	index -= zhiling[i].s;
				 }		    	
			}
		}
	}
	
	cout << xiaoren[index].name << endl;
	
	
	return 0;
}
