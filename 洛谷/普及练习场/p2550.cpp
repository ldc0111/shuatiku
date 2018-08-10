/*************************************************************************
> File Name: p2550.cpp
> Author:
> Mail: 
> Created Time: 2018年05月27日 星期日 12时15分18秒
************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<int>arr;
int a[7];
int b[8] = {0};
int fl;
int main(){
    cin >> n;
    for(int i = 0; i < 7; i++){
        cin >> fl;
        arr.push_back(fl);
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 7; j++){
             cin >> a[j];
        }
        fl = 0;
        for(int j =0; j < 7;j++){
            if(find(arr.begin(),arr.end(), a[j]) != arr.end()){
                fl++;
                
            }
        }
        b[fl]++;
    }
    for(int i = 7; i >= 1; i--){
        cout << b[i] << " ";
    }

    return 0;


}
