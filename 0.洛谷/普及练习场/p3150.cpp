/*************************************************************************
	> File Name: p3150.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月26日 星期六 18时54分39秒
 ************************************************************************/

#include <iostream>
using namespace std;
int n;
int a;

int main(){
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> a;
        if(a %2 == 0){
            cout << "pb wins" << endl;
        }else {
            cout << "zs wins" << endl;
        }
    }

    return 0;
}
