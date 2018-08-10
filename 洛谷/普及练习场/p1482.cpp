/*************************************************************************
	> File Name: p1482.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 11时06分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

int a,b,c,d;
char m;
int gdc(int a,int b){
    if(b == 0){
        return a;
    }
    return gdc(b,a%b);
}
int main(){
    cin >> a >> m >> b >> c >> m >> d;
    a = a * c;
    b = b * d;
    c = gdc(a,b);
    cout << b/c << " " << a/c << endl;
    return 0;
}
