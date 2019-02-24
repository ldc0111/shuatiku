/*************************************************************************
	> File Name: p1615.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 10时49分53秒
 ************************************************************************/

#include <iostream>
using namespace std;
long long a,b,c,d,e,f,g;
char m;
int main(){
    cin >> a>> m >> b >> m >> c >> d >> m >> e >> m >> f >> g;
    cout << (d - a)*3600*g+(e - b)*60*g +(f - c)*g << endl;
    return 0;
}
