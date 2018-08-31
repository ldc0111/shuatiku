/*************************************************************************
	> File Name: p3367.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2018年08月25日 星期六 15时16分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

#define maxn 10000
int n, m;
int ar[maxn + 5] ={0};
int a, b, c;
void init(){
    for(int i = 1; i< maxn; i++){
        ar[i] = i;
    }
}

int find(int a){
    if(ar[a] == a) return a;
    ar[a]= find(ar[a]);
    return ar[a];
}
int unio(int a, int b){
    int aroot = find(ar[a]);
    int broot = find(ar[b]);
    if(aroot != broot){
        ar[broot] = ar[aroot];
    }
    return 0;
}
int main(){
    init();
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        if(a == 1){
            unio(ar[b],ar[c]);
        }else{

            if(find(ar[b]) == find(ar[c])){
                cout << "Y" << endl;
            }else{
                cout << "N" << endl;
            }
        }
        //cout <<ar[1] << ar[2] << ar[3] << ar[4] << endl;
    }
    return 0;
}
