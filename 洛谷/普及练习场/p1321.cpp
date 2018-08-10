/*************************************************************************
	> File Name: p1321.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月30日 星期三 18时43分30秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
    int a = 0, b = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'b'|| s[i + 1] == 'o'|| s[i + 2] == 'y') a++;
        if(s[i] == 'g'|| s[i + 1] == 'i'|| s[i + 2] == 'r'|| s[i + 3] == 'l') b++;
    }
    cout << a << endl << b << endl;

    return 0;
}

