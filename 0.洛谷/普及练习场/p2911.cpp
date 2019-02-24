/*************************************************************************
	> File Name: p2911.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 18时52分23秒
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int a[3],ti = 0,ans = 0;
map<int,int> ma;


int main(){
    cin >> a[0] >> a[1] >> a[2];
    
    for(int i = 1; i<= a[0]; i++){
        for(int j = 1; j<= a[1];j++){
            for(int k = 1; k <= a[2]; k++)
                ma[i + j + k]++;
        }
    }
    for(map<int,int>::iterator it = ma.begin() ; it != ma.end(); it++){
        if(it->second > ti){
            ti = it->second;
            ans = it->first;
        }
    }
    cout << ans << endl;

    return 0;
}
