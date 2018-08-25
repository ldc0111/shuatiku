/*************************************************************************
	> File Name: p1317.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月23日 星期四 10时17分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
#define maxn 10000
int n;
int a[maxn +  5] = {0};
int ans = 0;

int main(){
    cin >> n;
    for(int i =  0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        if(a[i] < a[i - 1]){//只要后一个比前一个小，就一定会形成一个低洼
            ans++,i++;
            while(a[i] <= a[i - 1]) i++;//寻找的低洼的最低点 注意等号
        };
    }
    if(a[n - 1] < a[n - 2]) ans -= 1;//排除最后一个
    cout << ans;

    return 0;
}
