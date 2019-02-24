/*************************************************************************
	> File Name: p4702.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年06月29日 星期五 19时43分00秒
 ***********************:*************************************************/

#include <iostream>
using namespace std;


int main(){
    int n = 0, fl;
    long long sum = 0;
    cin >> n ;
    for (int i  = 0; i < n; i++){
        cin >> fl;
        sum += fl;
    }
    (sum % 2) ? (cout << "Alice" << endl) : (cout << "Bob" << endl);

    return 0;
}
