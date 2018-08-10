/*************************************************************************
> File Name: p2788.cpp
> Author:
> Mail: 
> Created Time: 2018年06月12日 星期二 21时15分04秒
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string st;
long long sum = 0, fl = 0;
int main(){
    cin >> st;
    int i = 0;
    while(i < st.size()){
        if(st[i] >= '0' && st[i] <= '9'){
            sum += st[i] - '0';
            sum *= 10;
        }else{
            break;
        }
        i++;
    }
    sum /= 10;
    while(i < st.size()){
        char ch = st[i++];
        while(i < st.size()){
            if(st[i] >= '0' && st[i] <= '9'){
                fl += st[i] - '0';
                fl *= 10;
            }else{
                break;
            }
            i++;
        }
        fl /= 10;
        if(ch == '-'){
            sum -= fl;
        }else{
            sum += fl;
        }
        fl = 0;
    }
    cout << sum << endl; 
    return 0;
    }
