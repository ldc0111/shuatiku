/*************************************************************************
	> File Name: p2955.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月27日 星期日 11时27分49秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int n;
string str;
int main(){
     cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        if((str[str.size() - 1]- '0') %2 == 0){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }

     return 0;
}
