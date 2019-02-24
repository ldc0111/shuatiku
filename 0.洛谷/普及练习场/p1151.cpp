/*************************************************************************
	> File Name: p1151.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月21日 星期一 19时28分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int k;
    int ans = 0;
    cin >> k;
    for(int i = 10000; i <= 30000;i++){
        int sub0 = i/100;
        int sub1 = i%10000/10;
        int sub2 = i%1000;
        if((!(sub0%k))&&(!(sub1%k))&&(!(sub2%k))){
            cout << i << endl;
            ans++;
        }
    }
    if(ans == 0){
        cout << "No" << endl;
    }

    return 0;
}
