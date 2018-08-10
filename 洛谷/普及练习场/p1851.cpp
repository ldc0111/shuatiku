/*************************************************************************
	> File Name: p1851.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月31日 星期四 20时23分58秒
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int n;
int b = 0;
int  divisor(int n){
    int sum = 0;
    for(int i = 1; i*i <= n; i++){
        if(n%i == 0){
            sum += i;
            if(i != n/i) sum += n/i;
        }
    }
    return sum - n;
}

int main(){
    cin >> n;
    int i = 0;
    for(i = n;b == 0; i++){
        int c = divisor(i);
        if(c == i){
            continue;
        }else{
            if(i == divisor(c)){
                b = c;
                break;
            }
        }
    }
    cout << i << " " << b << endl;
    return 0;    
}
