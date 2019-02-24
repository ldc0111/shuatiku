/*************************************************************************
	> File Name: p1936.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月31日 星期四 19时05分44秒
 ************************************************************************/

#include <iostream>
using namespace std;


int main(){
    int k,m,n,c;
    cin >> k;
    for(m = n = 1; m + n <= k;){
        c = m + n;
        m = n;
        n = c;
    }
    cout <<"m=" << m << endl << "n=" << n << endl;
    return 0;
}
