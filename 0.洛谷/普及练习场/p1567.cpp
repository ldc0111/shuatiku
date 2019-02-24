/*************************************************************************
	> File Name: p1567.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月27日 星期日 11时50分59秒
 ************************************************************************/

#include <iostream>
using namespace std;

int n;
int s = 0,zh,ti = 0,ans = -1;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> zh;
        if(zh > s){
            ti++;
            ans = max(ans,ti);
        }else{
           ti = 1;
        }
        s = zh;
    }
    cout << ans << endl;
    return 0;
}
