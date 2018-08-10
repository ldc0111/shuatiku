/*************************************************************************
	> File Name: p1106.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月15日 星期二 19时25分10秒
 ************************************************************************/

 #include <iostream>
 #include <string>

using namespace std;
string str;
int n;
int index = 0;

 int main(){
    cin >> str >> n;
    bool flag1;
     while(n--){
         int i;
         flag1 = true;
         for(i =0; i < str.size() - 1; i++){
             if(str[i] > str[i + 1]){
                 str.erase(i,1);
                 flag1 = false;
                 break;
             }
         }
         if(i == str.size() - 1&& flag1){
             str.erase(i,1);
         }
     }
     bool flag;
     for(int i = 0; i< str.size(); i++){
         if(str[i] != '0') flag = true;
         if(flag) cout << str[i];
    }
     if(str.size() == 0 ||!flag){
         cout << 0;
     }
    cout << endl;

    return 0;
 }
