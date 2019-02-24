/*************************************************************************
	> File Name: p2084.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 11时17分43秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int n;
string str;

int main(){
    cin >> n >> str;
    for(int i = str.size() - 1;i>= 0;i--){
         if(i == str.size() - 1){
            cout << str[str.size() - i - 1] <<"*" << n <<"^" <<i;
        }else if(str[str.size() - i - 1] != '0'&&i > 0){
            cout << "+"<< str[str.size() - i - 1] <<"*" << n <<"^" <<i;
        } else if (i == 0 && str[str.size() - i - 1] != '0') { 
            cout << "+" << str[str.size() - i - 1] <<"*" << n <<"^" <<i << endl;
        }   
    }
    return 0;
}
