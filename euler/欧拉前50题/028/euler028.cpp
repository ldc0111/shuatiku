/*************************************************************************
	> File Name: euler028.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月30日 星期六 15时10分35秒
 ************************************************************************/

#include <iostream>
using namespace std;


int main(){
    int sum = 1;
    for(int i = 3; i <= 1001; i += 2){
        sum += (4*i*i - 6 * i + 6);
    }

    cout << sum << endl;
    return 0;
}
