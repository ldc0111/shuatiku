/*************************************************************************
	> File Name: p1554.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月22日 星期二 19时27分00秒
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int a,b,temp = 0;
long long arr[10] = {0};
int main(){
    cin >> a >> b;
    for(int i = a; i <= b;i++){
        temp = i;
        while(temp){
            int ge = temp%10;
            arr[ge]++;
            temp /= 10;
        }
    }
    for(int i = 0; i < 10; i++){
        printf(i == 9 ?"%d\n":"%d ",arr[i]);
    }
    return 0;
}

