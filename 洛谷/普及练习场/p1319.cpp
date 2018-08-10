/*************************************************************************
	> File Name: p1319.cpp
	> Author:
	> Mail: 
	> Created Time: 2018年05月24日 星期四 18时46分39秒
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;

int n,fl;
queue<int> qu;

int main(){
    cin >> n;
    while(cin >> fl){
        qu.push(fl);
    }
    int times = 0;
    int lin = 0;
    while(!qu.empty()){
        int  t = qu.front();
        qu.pop();
        if(lin == 0){
            while(t--){
                if(times < n){
                    cout << 0;
                    times++;
                }else{
                    cout << endl;
                    cout << 0;
                    times = 1;
                }
            }
            lin = 1;
        }else{
            while(t--){
                if(times < n){
                    cout << 1;
                    times++;
                }else{
                    cout << endl;
                    cout << 1;
                    times = 1;
                }
            }
            lin = 0;
        }
    }
    return 0;
}
