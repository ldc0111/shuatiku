/*************************************************************************
	> File Name: p1420.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月21日 星期一 19时51分25秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int shang = -1;
int zhe = 0;
int flag = 1,ans = 1;
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >>zhe;
        if(zhe - shang == 1){
            flag++;
            ans = max(ans,flag);
        }else{
            flag = 1;
        }
        shang = zhe;
    }
    cout << ans << endl;

    return 0;
}
