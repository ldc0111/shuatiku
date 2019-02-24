/*************************************************************************
> File Name: p1917.cpp
> Author:
> Mail: 
> Created Time: 2018年05月26日 星期六 17时44分33秒
************************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int a[10];
int fl = 1,qi = 0,x = 0,y;
string str;
int main(){
    for(int i = 0; i < 3; i++){
        cin >> str;
        for(int j =0; j< 3;j++){
            if(str[j] == 'O'){
                a[fl++] = 1;
                qi++;
                if((fl -1) != 5){
                    y = fl - 1;
                }
            }else if(str[j] == 'X'){
                a[fl++] = -1;
                qi++;
                x = fl - 1;
            }else{
                a[fl++] = 0;
            }
        }
    }
    if(qi <= 1){
        cout << "Dont know."<< endl;
        cout << qi << endl;
    }else if(qi == 2){
        if(x == 1|| x == 3 || x == 7|| x == 9){
            cout << "Dont know." << endl;
        } else {
            cout << "xiaoa will win." << endl;

        }
        cout << qi << endl;
    }else {
        if(abs(x - 5) != abs(y - 5)){
            cout << "xiaoa will win." << endl;
        }else{
            cout <<"Dont know." << endl;
        }
        cout << qi << endl;
    }

    return 0;
}
