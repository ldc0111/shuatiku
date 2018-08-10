/*************************************************************************
> File Name: p2192.cpp
> Author:
> Mail: 
> Created Time: 2018年05月25日 星期五 11时36分42秒
************************************************************************/

#include <iostream>
using namespace std;
int n,cnt_5 = 0,cnt_0 = 0,x;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 5){
            cnt_5++;
        } else{
            cnt_0++;
        }
    }

    if(cnt_0 == 0){
        cout <<-1 << endl;
        return 0;
    }
    if(cnt_5 < 9){
        cout << 0 << endl;
        return 0;
    }
    for(int i = 1;i <=cnt_5/9*9; i++){
        cout << 5;
    }
    for(int i = 1;i <=cnt_0;i++){
        cout << 0;
    }
    cout << endl;

    return 0;
}




