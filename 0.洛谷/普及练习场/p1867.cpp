/*************************************************************************
> File Name: p1867.cpp
> Author:
> Mail: 
> Created Time: 2018年05月31日 星期四 19时16分23秒
************************************************************************/

#include <iostream>
using namespace std;

int n;
double x,a;
int leves = 0;
double xue = 10,sheng = 0;
long long sum = 0;
int aa[64] = {1};
bool fl = true;
void init(){
    for(int i = 1; i < 60;i++){
        aa[i] = aa[i - 1] << 1;
    }
    for(int i = 1; i < 60; i++){
        aa[i] += aa[i - 1];
    }
}
int main(){
    init();
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> a;
        if(xue - x > 0 && fl){
            xue -= x;
            if(xue > 10){
                xue = 10;
            }
            sum += a;
        }else{
            fl = false;
        }

    }
    while(aa[++leves] <= sum);
    sheng = sum - aa[leves - 1];
    if(sum == 0){
        cout << 0 << " " << 0 << endl;
    }else{

        cout << leves <<" " << sheng<< endl;
    }

    return 0;
}
