/*************************************************************************
	> File Name: p3741.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月25日 星期五 09时47分56秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int n;
string str;
int ans = 0;
int main(){
    cin >> n;
    cin >> str;
    for(int i =0; i< str.size();i++){
        if(str[i]== 'V'&&str[i + 1] == 'K'){
            ans++;
            str[i] = str[i + 1] = 'A';
        }
    }
    for(int i = 0;i <str.size();i++){
        if(str[i] != 'A'&&str[i] == str[i + 1]){
            ans++;
            break;
        }
    }
   cout << ans << endl;
    return 0;
}
