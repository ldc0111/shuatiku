/*************************************************************************
	> File Name: p3742.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月23日 星期三 18时32分37秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string str1,str2,str3;
int n;



int main(){
    cin >> n;
    cin >> str1 >> str2;
    for(int i = 0; i < str1.size(); i++){
        if(str2[i] >str1[i]){
            cout << -1 << endl;
            return 0;
        }else{
            str3.push_back(str2[i]);
        }
    }
    cout << str3 << endl;
    return 0;
}
