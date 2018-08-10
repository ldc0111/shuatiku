/*************************************************************************
	> File Name: p1838.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月25日 星期五 10时47分39秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int fl[10];
string str;
int main(){
    memset(fl,-1,sizeof(fl));
    cin >> str;

    for(int i = 0; i < str.size();i++){
        fl[str[i] - '0'] = i%2;//小a 为0
    }
    if(((fl[1] == fl[2] && fl[1] == fl[3])||
       (fl[1] == fl[4] && fl[1] == fl[7])||
       (fl[1] == fl[5] && fl[1] == fl[9])) && fl[1] != -1){
           if(fl[1] == 0){
               cout <<"xiaoa wins."<<endl;
           }else{
               cout << "uim wins." <<endl;
           }
    }else if((
        (fl[4] == fl[5] && fl[4] == fl[6])||
        (fl[2] == fl[5] && fl[2] == fl[8])||
        (fl[3] == fl[5] && fl[3] == fl[7])) && fl[5] != -1){
            if(fl[5] == 0){
                cout <<"xiaoa wins."<<endl;
             }else{
                 cout << "uim wins." <<endl;
             }

    }else if((
        (fl[3] == fl[6] && fl[3] == fl[9])||
        (fl[7] == fl[8] && fl[7] == fl[9])) && fl[9] != -1){
            if(fl[9] == 0){
                cout <<"xiaoa wins."<<endl;
             }else{
                 cout << "uim wins." <<endl;
             }
    }else{
        cout << "drew." << endl;        
    }


    return 0;
}
