/*************************************************************************
	> File Name: p1664.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月28日 星期一 20时02分19秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int n = 0;
int lian = 0, duan = 0;
int ans = 0;
int fl = 0;

int main(){

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> fl;
        if(fl){//连续
            if(duan){
                 lian -= pow(2,duan - 1);
                 if(lian < 0) lian = 0;
                 lian++;
                 duan = 0;
            }else {
                 lian++;
            }
            if(lian <= 2){
                 ans++;
            }else if(lian <= 6){
                 ans += 2;
            }else if(lian <= 29){
                 ans += 3;
            }else if(lian <= 119){
                 ans += 4;
            }else if(lian <= 364){
                ans += 5;
            }else{
                ans += 6;
            }
            //cout << ans << endl;
           // cout << lian << endl;
        }else {//断
            duan++;
        }
    }

    cout << ans << endl;;
    return 0;
}
