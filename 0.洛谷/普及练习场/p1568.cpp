/*************************************************************************
> File Name: p1568.cpp
> Author:
> Mail: 
> Created Time: 2018年06月14日 星期四 23时08分07秒
************************************************************************/
#include <iostream>


using namespace std;
int a[1000002] = {0},b[1000002] = {0},afl = 1, bfl = 1;



int main(){
    int su,mi;
    int n,m,ci = 0,shang = 0;

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> su >> mi;
        while(mi--) a[afl++] = a[afl - 1] + su;
    }
    for(int i = 0; i < m; i++){
        cin >> su >> mi;
        while (mi--){
            b[bfl++] = b[bfl - 1] + su;
            if(shang == 0){
                if(a[bfl - 1] > b[bfl - 1]) shang = 1;
                else   shang = -1;
            }else if(shang == 1){
                if(b[bfl - 1] > a[bfl - 1]){
                    ci++;
                    shang = -1;
                }
                
            }else{// shang == -1
                  if(a[bfl - 1] > b[bfl - 1]){
                      ci++;
                      shang = 1;
                  }
            }
            
        cout << ci<<" " << a[bfl - 1] << " " <<b[bfl - 1] << endl;
        }
    }
    //cout << ci << endl;
    return 0;
}
