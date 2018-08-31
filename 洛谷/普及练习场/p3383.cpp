#include <iostream>
using namespace std;
#define maxn 10000000
int isprime[maxn + 5] = {1,1,0};
int prime[maxn + 5] ={0};
int temp, n, m;
void init(){
    for(int i = 2; i < maxn; i++){
        if(!isprime[i]){
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0]; j++){
            if(i * prime[j] > maxn) break;
            isprime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
}
int main(){
    init();
    //cout << prime[5];
    cin >> n >> m;
    for(int i = 0; i< m; i++){
        cin >> temp;
        if(isprime[temp] == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}
